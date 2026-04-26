#include "GWindower.hpp"

#include <GLFW/glfw3.h>

#include <stdexcept>
#include <string>


static inline void _error(const char* file, int line, const char* func, const std::string& msg)
        { throw std::runtime_error(std::string("[ERROR] ") + file + "@" + std::to_string(line) + " (" + func + "): " + msg); }
#define ERROR(msg) _error(__FILE__, __LINE__, __func__, (msg))


GLFWwindow* window;


GWindower::GWindower() {
        if (!glfwInit()) ERROR("Failed to initialize GLFW");

        GLFWmonitor* monitor = glfwGetPrimaryMonitor();
        if (monitor == NULL) ERROR("Failed to get monitor");

        const GLFWvidmode* video_mode = glfwGetVideoMode(monitor);
        if (video_mode == NULL) ERROR("Failed to get monitor's video mode");

        glfwWindowHint(GLFW_RED_BITS, video_mode->redBits);
        glfwWindowHint(GLFW_GREEN_BITS, video_mode->greenBits);
        glfwWindowHint(GLFW_BLUE_BITS, video_mode->blueBits);
        glfwWindowHint(GLFW_REFRESH_RATE, video_mode->refreshRate);
        window = glfwCreateWindow(
                video_mode->width,
                video_mode->height,
                "",
                monitor,
                NULL
        );
        if (window == NULL) ERROR("Failed to create window");

        this->screen_width = video_mode->width;
        this->screen_height = video_mode->height;
        this->screen_refresh_rate = video_mode->refreshRate;

        // TODO
}

bool GWindower::Update() {
        glfwPollEvents();

        // TODO

        return glfwWindowShouldClose(window);
}

GWindower::~GWindower() { glfwTerminate(); }

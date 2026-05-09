#include "GWindower.hpp"

#include <GLFW/glfw3.h>
#ifdef _WIN32
#define GLFW_EXPOSE_NATIVE_WIN32
#else
#define GLFW_EXPOSE_NATIVE_X11
#define GLFW_EXPOSE_NATIVE_WAYLAND
#endif
#include <GLFW/glfw3native.h>

#include <stdexcept>
#include <string>
#include <string.h>


#define ERROR(msg) throw std::runtime_error(std::string("[ERROR] ") + __FILE__ + "@" + std::to_string(__LINE__) + " (" + __func__ + "): " + (msg))


GLFWwindow* window;


GWindower::GWindower() {
        if (!glfwInit()) ERROR("Failed to initialize GLFW");

        GLFWmonitor* monitor = glfwGetPrimaryMonitor(); if (monitor == NULL) ERROR("Failed to get monitor");

        const GLFWvidmode* video_mode = glfwGetVideoMode(monitor); if (video_mode == NULL) ERROR("Failed to get monitor's video mode");

        glfwWindowHint(GLFW_RED_BITS, video_mode->redBits); glfwWindowHint(GLFW_GREEN_BITS, video_mode->greenBits); glfwWindowHint(GLFW_BLUE_BITS, video_mode->blueBits); glfwWindowHint(GLFW_REFRESH_RATE, video_mode->refreshRate); glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); glfwWindowHint(GLFW_DECORATED, GLFW_FALSE); glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        window = glfwCreateWindow(video_mode->width, video_mode->height, "", monitor, NULL); if (window == NULL) ERROR("Failed to create window");

        this->screen_width = video_mode->width;
        this->screen_height = video_mode->height;
        this->screen_refresh_rate = video_mode->refreshRate;

        #ifdef _WIN32
                this->native_window_handle = (void*)glfwGetWin32Window(window);
        #else
                int platform = glfwGetPlatform();
                if (platform == 0) ERROR("Failed to get platform");
                if (platform == GLFW_PLATFORM_X11) this->native_window_handle = (void*)glfwGetX11Window(window);
                else if (platform == GLFW_PLATFORM_WAYLAND) this->native_window_handle = (void*)glfwGetWaylandWindow(window);
                else ERROR("Unsupported platform");
        #endif
        if (this->native_window_handle == NULL) ERROR("Failed to get native window handle");

        memset(GWindower::key_states, GLFW_RELEASE, (sizeof(GWindower::key_states) / sizeof(GWindower::key_states[0])));
        GWindower::mouse_x = 0;
        GWindower::mouse_y = 0;
        memset(GWindower::mouse_button_states, GLFW_RELEASE, (sizeof(GWindower::mouse_button_states) / sizeof(GWindower::mouse_button_states[0])));
        GWindower::mouse_scroll_x = 0;
        GWindower::mouse_scroll_y = 0;
        memset(GWindower::gamepad_buttons, 0, (sizeof(GWindower::gamepad_buttons) / sizeof(GWindower::gamepad_buttons[0])));
        memset(GWindower::gamepad_axes, GLFW_RELEASE, (sizeof(GWindower::gamepad_axes) / sizeof(GWindower::gamepad_axes[0])));

        glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
        if (glfwRawMouseMotionSupported()) glfwSetInputMode(window, GLFW_RAW_MOUSE_MOTION, GLFW_TRUE);

        glfwSetKeyCallback(window, [](GLFWwindow* window, int key, int scancode, int action, int mods){
                GWindower::key_states[key] = action;
        });

        glfwSetCursorPosCallback(window, [](GLFWwindow* window, double xpos, double ypos){
                GWindower::mouse_x = xpos;
                GWindower::mouse_y = ypos;
        });

        glfwSetMouseButtonCallback(window, [](GLFWwindow* window, int button, int action, int mods){
                GWindower::mouse_button_states[button] = action;
        });

        glfwSetScrollCallback(window, [](GLFWwindow* window, double xoffset, double yoffset){
                GWindower::mouse_scroll_x = xoffset;
                GWindower::mouse_scroll_y = yoffset;
        });
}

bool GWindower::Update() {
        glfwPollEvents();

        for (int j = 0; j < GLFW_JOYSTICK_LAST; j++) {
                if (!glfwJoystickIsGamepad(j)) continue;
                GLFWgamepadstate gamepad_state;
                if (!glfwGetGamepadState(j, &gamepad_state)) continue;
                for (int b = 0; b < GLFW_GAMEPAD_BUTTON_LAST; b++) this->gamepad_buttons[b] = gamepad_state.buttons[b];
                for (int a = 0; a < GLFW_GAMEPAD_AXIS_LAST; a++) this->gamepad_axes[a] = gamepad_state.axes[a];
                break;
        }

        return !glfwWindowShouldClose(window);
}

GWindower::~GWindower() { glfwTerminate(); }

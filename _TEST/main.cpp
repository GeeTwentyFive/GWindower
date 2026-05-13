#include "../GWindower.hpp"

#include <stdexcept>
#include <iostream>

int main() { try {
        GWindower win;
        while (win.Update()) {
                if (win.key_states[GW_KEY_ESCAPE]) break;
        }

        return 0;
} catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
}}
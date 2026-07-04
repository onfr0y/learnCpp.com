#include <iostream>

namespace basics {
    void demoInitialization() {
        std::cout << "--- Initialization Demo ---\n";
        // Direct list initialization (preferred in modern C++)
        int x{ 5 };
        // Value initialization (initializes to 0)
        int y{};

        std::cout << "x: " << x << ", y: " << y << '\n';
    }

    void demoBasicIO() {
        std::cout << "\n--- Basic Input/Output Demo ---\n";
        std::cout << "Enter a number: ";
        int userInput{};
        std::cin >> userInput;
        std::cout << "You entered: " << userInput << '\n';
    }
}

int main() {
    std::cout << "============================================\n";
    std::cout << "          C++ STUDY UNIT 01: BASICS         \n";
    std::cout << "============================================\n";

    basics::demoInitialization();
    basics::demoBasicIO();

    return 0;
}

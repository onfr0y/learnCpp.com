#include <iostream>

// Forward declaration / Function prototype
int getValueFromUser();

void printDouble(int value) {
    std::cout << value << " doubled is " << value * 2 << '\n';
}

int main() {
    std::cout << "============================================\n";
    std::cout << "          C++ STUDY UNIT 02: FUNCTIONS       \n";
    std::cout << "============================================\n";

    int num{ getValueFromUser() };
    printDouble(num);

    return 0;
}

int getValueFromUser() {
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

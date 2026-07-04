#include <iostream>

void printValue(int val) {
    std::cout << "Printing value: " << val << '\n';
}

void processValue(int val) {
    // You can set a breakpoint here to step into printValue
    printValue(val + 10);
}

int main() {
    std::cout << "============================================\n";
    std::cout << "         C++ STUDY UNIT 03: DEBUGGING       \n";
    std::cout << "============================================\n";

    // Set a breakpoint here to step through this execution
    int initialVal{ 5 };
    processValue(initialVal);

    std::cout << "\nUnit 03 completed successfully!\n";
    return 0;
}

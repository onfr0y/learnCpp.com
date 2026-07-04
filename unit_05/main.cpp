#include <iostream>
#include <string>
#include <string_view>

namespace constants {
    // A compile-time function (computes factorial at compile time!)
    constexpr int factorial(int n) {
        return (n <= 1) ? 1 : n * factorial(n - 1);
    }
}

namespace strings {
    // Accepts a std::string_view: avoids copying the string contents!
    void printView(std::string_view strView) {
        std::cout << "Viewing string: \"" << strView << "\" (Size: " << strView.length() << ")\n";
    }
}

int main() {
    std::cout << "====================================================\n";
    std::cout << "     C++ STUDY UNIT 05: CONSTANTS & STRINGS         \n";
    std::cout << "====================================================\n";

    // 1. Compile-Time constexpr Demo
    constexpr int fact5{ constants::factorial(5) };
    std::cout << "Compile-time calculation: factorial(5) = " << fact5 << '\n';

    // 2. std::string_view Demo
    std::string myStr{ "Hello, Modern C++!" };
    
    // We can pass a std::string directly
    strings::printView(myStr);

    // We can pass a string literal without allocating a std::string first
    strings::printView("Hello from a literal");

    // We can slice a std::string_view without allocations
    std::string_view subView{ myStr };
    subView.remove_prefix(7); // View starts after "Hello, "
    std::cout << "\nAfter removing prefix 'Hello, ':\n";
    strings::printView(subView);

    std::cout << "\nUnit 05 completed successfully!\n";
    return 0;
}

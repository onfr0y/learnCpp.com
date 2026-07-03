#include <iostream>
#include <iomanip> // For std::setprecision

namespace types {
    // Demonstration of floating-point precision limitations
    void demoFloatingPointPrecision() {
        std::cout << "\n--- Floating Point Precision Demo ---\n";
        
        // Double has more precision than float
        float fValue{ 0.1f };
        double dValue{ 0.1 };

        // Set high precision output
        std::cout << std::setprecision(20);
        std::cout << "Float value of 0.1:  " << fValue << '\n';
        std::cout << "Double value of 0.1: " << dValue << '\n';

        // Float equality trap
        float a{ 0.1f + 0.1f + 0.1f }; // Should be 0.3
        float b{ 0.3f };
        
        std::cout << "\nTesting 0.1 + 0.1 + 0.1 == 0.3:\n";
        std::cout << "Value a: " << a << '\n';
        std::cout << "Value b: " << b << '\n';
        
        if (a == b) {
            std::cout << "They are equal! (Lucky compiler optimization or rounding)\n";
        } else {
            std::cout << "They are NOT equal! (Floating point rounding error)\n";
        }
    }

    // Safe casting using static_cast instead of C-style casting
    void demoStaticCast() {
        std::cout << "\n--- Type Casting Demo ---\n";
        
        char ch{ 'A' };
        std::cout << "Character: " << ch << '\n';
        
        // Modern C++ preferred casting
        int asciiValue{ static_cast<int>(ch) };
        std::cout << "ASCII integer code: " << asciiValue << '\n';

        double pi{ 3.14159 };
        // Explicitly cast double to int (warning-free truncation)
        int truncatedPi{ static_cast<int>(pi) };
        std::cout << "Double Pi: " << pi << " | Truncated to Int: " << truncatedPi << '\n';
    }
}

int main() {
    std::cout << "============================================\n";
    std::cout << "          C++ STUDY DAY 02: TYPES            \n";
    std::cout << "============================================\n";

    types::demoFloatingPointPrecision();
    types::demoStaticCast();

    std::cout << "\nDay 02 completed successfully!\n";
    return 0;
}

#include <iostream>
#include <limits>
#include <string>

// 6.1 -- Operjator precedence and associativity.
//
int getValue() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;
  return x;
}

void printCalculation(int x, int y, int z) { std::cout << x + (y * z); }

int main() {
  //   printCalculation(getValue(), getValue());
  int a{getValue()};
  int b{getValue()};
  int c{getValue()};
  return 0;
}

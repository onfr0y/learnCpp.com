#include <iostream>
// #include <iostream>

namespace operators {}
// 6.2 -- Arithmetic operators
int main() {
  constexpr int apples{12};
  std::cout << "You have " << apples
            << " apples. Enter how many people to divide them between: ";

  double x{};
  std::cin >> x;

  std::cout << "each person gets " << apples / x << "whole apples.\n";

  return 0;
}

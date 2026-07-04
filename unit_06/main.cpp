#include <iostream>
// #include <iostream>

namespace operators {}
// // 6.2 -- Arithmetic operators
// int main() {
//   constexpr int apples{12};
//   std::cout << "You have " << apples
//             << " apples. Enter how many people to divide them between: ";
//
//   int x{}; // if you run your code in put it as 0, it's going to be error;
//   because, your pc remember it as 0.0 std::cin >> x;
//
//   std::cout << "each person gets " << apples / x << " whole apples.\n";
//
//   return 0;
// }
//
// 6.3 -- Remainder and exponentiation.

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;

  std::cout << "Enter another integer: ";
  int y{};
  std::cin >> y;

  std::cout << "The remainder is: " << x % y << std::endl;

  if ((x % y) == 0)
    std::cout << x << " in evenly divisible by " << y << '\n';
  else
    std::cout << x << " is not evenly divisible by " << y << '\n';

  return 0;
}

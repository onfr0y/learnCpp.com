#include <cassert>
#include <cstdint>
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
// jjj
//   std::cout << "each person gets " << apples / x << " whole apples.\n";
//
//   return 0;
// }
//
// 6.3 -- Remainder and exponentiation.

// int main() {
//   std::cout << "Enter an integer: ";
//   int x{};
//   std::cin >> x;
//
//   std::cout << "Enter another integer: ";
//   int y{};
//   std::cin >> y;
//
//   std::cout << "The remainder is: " << x % y << std::endl;
//
//   if ((x % y) == 0)
//     std::cout << x << " in evenly divisible by " << y << '\n';
//   else
//     std::cout << x << " is not evenly divisible by " << y << '\n';
//
//   return 0;
// }
// note: exp must be non-negative
// note: does not perform range/overflow checking, use with caution
// constexpr std::int64_t powint(std::int64_t base, int exp) {
//   assert(exp >= 0 && "powint: exp parameter has negative value");
//
//   // Handle 0 case
//   if (base == 0)
//     return (exp == 0) ? 1 : 0;
//
//   std::int64_t result{1};
//   while (exp > 0) {
//     if (exp & 1) // if exp is odd
//       result *= base;
//     exp /= 2;
//     base *= base;
//   }
//
//   return result;
// }
//
// int main() {
//   std::cout << powint(7, 12) << '\n'; // 7 to the 12th power
//
//   return 0;
// }
//
//
//
// 6.4 -- increment/decrement operators, and side effects
//
// int main() {
//
//   int x{5};
//   int y{5};
//   // int y{++x};
//   // // int z{x++};
//   // std::cout << x << " " << y << "  " << z << std::endl;
//   std::cout << x << " " << y << std::endl;
//   std::cout << ++x << " " << --y << std::endl;
//   std::cout << x << " " << y << std::endl;
//   std::cout << x++ << " " << y-- << std::endl;
//   std::cout << x << " " << y << std::endl;
// }
//
// 6.5 -- The comma operator
//
int main() {

  int x{1};
  int y{2};

  std::cout << ++x, ++y << '\n';
  std::cout << xx + ;
  return 0;
}

# 📝 Day 03: Constants, Strings & Operators

## 🎯 LearnCpp.com Readings
- **Chapter 5**: Constants and Strings
- **Chapter 6**: Operators

---

## 💡 Key Concepts & Best Practices

### 1. `const` vs `constexpr` vs `consteval`
- **`const`**: Runtime constant. The value is fixed once initialized, but initialization happens at runtime.
  ```cpp
  int x;
  std::cin >> x;
  const int y{ x }; // Valid: value determined at runtime, but cannot be changed later.
  ```
- **`constexpr`**: Compile-time constant. Must be initialized with a value that can be resolved at compile time.
  ```cpp
  constexpr int z{ 5 + 3 }; // Valid
  // constexpr int w{ x };   // Error: x is runtime!
  ```
- **`consteval`** (C++20): Immediate function. Tells the compiler that the function *must* evaluate at compile time.

### 2. `std::string` vs `std::string_view`
- **`std::string`**: Manages dynamic memory (stores characters on the heap). Copying a `std::string` performs a slow deep-copy allocation.
- **`std::string_view`** (C++17): A read-only "window" or slice of an existing string. It does not allocate memory and is extremely fast to copy.
- **Rule**: Prefer passing read-only strings as `std::string_view` rather than `const std::string&` in function signatures, as it handles both string literals and `std::string` without conversions or dynamic allocations.

### 3. Warning on `std::string_view` lifetime
- A `std::string_view` is just a view; it does not own the string. If the original string is destroyed, the view becomes a dangling pointer!
  ```cpp
  std::string_view getView() {
      std::string s{ "temporary" };
      return s; // Danger: s is destroyed at end of function. Returned view is dangling!
  }
  ```

---

## 🏃 Run the Code
```bash
./run.sh day_03
```

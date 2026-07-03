# 📝 Day 01: Setup & C++ Basics

## 🎯 LearnCpp.com Readings
- **Chapter 1**: C++ Basics
- **Chapter 2**: C++ Basics: Functions and Files

---

## 💡 Key Concepts & Best Practices

### 1. Initialization Methods
In C++, there are multiple ways to initialize variables. Modern C++ heavily favors **Brace Initialization** (also called list initialization):

| Method | Syntax | Note |
| :--- | :--- | :--- |
| **Default Initialization** | `int x;` | Leaves variable uninitialized (contains garbage memory). **Avoid!** |
| **Copy Initialization** | `int x = 5;` | Inherited from C. Less efficient for complex objects. |
| **Direct Initialization** | `int x(5);` | Used for some object initializations, but can be ambiguous. |
| **Direct List Initialization** | `int x{ 5 };` | Modern standard. **Highly Recommended**. Disallows narrowing conversions (e.g. initializing an `int` with `4.5` will fail to compile). |
| **Value Initialization** | `int x{};` | Initializes to zero/default value. **Highly Recommended**. |

### 2. Output Formatting: `\n` vs `std::endl`
- **`std::endl`**: Outputs a newline character AND flushes the output buffer.
- **`\n`**: Outputs a newline character but does NOT flush the buffer (letting the OS handle it efficiently).
- **Best Practice**: Prefer `'\n'` or `"\n"` over `std::endl` for performance. Only use `std::endl` when you specifically need to ensure the output is visible immediately (e.g. debugging a crash).

### 3. Header Files & Header Guards
Every custom header file you write should contain **header guards** to prevent double-inclusion errors.
```cpp
#ifndef UNIQUE_GUARD_NAME_H
#define UNIQUE_GUARD_NAME_H

// Declarations here

#endif
```
Or simply use the widely-supported non-standard directive:
```cpp
#pragma once
```

### 4. Namespaces
Namespaces prevent name collision in large projects. Always put your code inside custom namespaces instead of polluting the global namespace.
- **Rule**: Never use `using namespace std;` in header files, and try to avoid it in source files. Instead, use explicit prefixes like `std::cout` or scope declarations like `using std::cout;`.

---

## 🏃 Run the Code
From the project `build` directory:
```bash
# Build
cmake --build .

# Execute
./day_01/day_01_bin
```

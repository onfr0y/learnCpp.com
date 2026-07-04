# 📝 Unit 02: Functions and Files

## 🎯 LearnCpp.com Readings
- **Chapter 2**: C++ Basics: Functions and Files

---

## 💡 Key Concepts & Best Practices

### 1. Function Return Values & Parameters
- Functions should have a single clear responsibility.
- C++ does not allow nested functions (defining a function inside another function).
- If a function does not return a value, use a `void` return type.

### 2. Forward Declarations
If function `foo` calls function `bar`, but `bar` is defined below `foo`, you must declare `bar`'s prototype before `foo`.
```cpp
void bar(); // Forward declaration / function prototype

void foo() {
    bar();
}
```

### 3. Header Files & Header Guards
Every custom header file you write should contain **header guards** to prevent double-inclusion errors.
```cpp
#ifndef UNIQUE_GUARD_NAME_H
#define UNIQUE_GUARD_NAME_H

// Declarations here

#endif
```
Or use:
```cpp
#pragma once
```

---

## 🏃 Run the Code
```bash
./run.sh unit_02
```

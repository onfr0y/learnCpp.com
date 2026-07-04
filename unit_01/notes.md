# 📝 Unit 01: C++ Basics

## 🎯 LearnCpp.com Readings
- **Chapter 1**: C++ Basics

---

## 💡 Key Concepts & Best Practices

### 1. Variable Initialization Methods
Modern C++ heavily favors **Brace Initialization** (also called list initialization):

| Method | Syntax | Note |
| :--- | :--- | :--- |
| **Default Initialization** | `int x;` | Leaves variable uninitialized (contains garbage memory). **Avoid!** |
| **Copy Initialization** | `int x = 5;` | Inherited from C. Less efficient for complex objects. |
| **Direct Initialization** | `int x(5);` | Used for some object initializations, but can be ambiguous. |
| **Direct List Initialization** | `int x{ 5 };` | Modern standard. **Highly Recommended**. Disallows narrowing conversions. |
| **Value Initialization** | `int x{};` | Initializes to zero/default value. **Highly Recommended**. |

### 2. Output Formatting: `\n` vs `std::endl`
- **`std::endl`**: Outputs a newline character AND flushes the output buffer.
- **`\n`**: Outputs a newline character but does NOT flush the buffer (letting the OS handle it efficiently).
- **Best Practice**: Prefer `'\n'` or `"\n"` over `std::endl` for performance. Only use `std::endl` when you specifically need to ensure the output is visible immediately (e.g. debugging a crash).

---

## 🏃 Run the Code
```bash
./run.sh unit_01
```

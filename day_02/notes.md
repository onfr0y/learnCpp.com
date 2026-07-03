# 📝 Day 02: Debugging & Fundamental Types

## 🎯 LearnCpp.com Readings
- **Chapter 3**: Debugging C++ Programs
- **Chapter 4**: Fundamental Data Types

---

## 💡 Key Concepts & Best Practices

### 1. C++ Integer Widths
C++ only guarantees minimum sizes for fundamental integer types. 
- **`char`**: 1 byte (8 bits)
- **`short`**: 2 bytes (16 bits)
- **`int`**: 2 bytes (almost always 4 bytes on modern systems)
- **`long`**: 4 bytes
- **`long long`**: 8 bytes

If you need exact-width integers (e.g. for network protocols, binary formats), include `<cstdint>` and use:
- `std::int8_t`, `std::uint8_t`
- `std::int16_t`, `std::uint16_t`
- `std::int32_t`, `std::uint32_t`
- `std::int64_t`, `std::uint64_t`

### 2. The standard index type: `std::size_t`
- Defined in `<cstddef>` (and other headers).
- It is an unsigned integer type used to represent the size of objects in memory.
- It changes size depending on the target architecture (32-bit vs 64-bit).
- **Rule**: Avoid mixing signed and unsigned integers in calculations, as it can cause unexpected underflow/overflow bugs.

### 3. Floating-Point Rounding Errors
Floating-point numbers (float, double) are represented in binary scientific notation (IEEE 754 standard). Because decimals like `0.1` cannot be precisely represented in binary, rounding errors occur.
- **Rule**: Never use `==` or `!=` to compare floating-point numbers. Instead, use an epsilon check (a small tolerance value) or a specialized comparison function.

### 4. Explicit Type Conversion: `static_cast`
C-style casting (e.g., `(int)myDouble`) is discouraged because it is unsafe and can perform silent reinterpretations.
- **Modern C++**: Use `static_cast<new_type>(expression)`. It is easily searchable, compile-time checked, and explicit.

---

## 🏃 Run the Code
```bash
./run.sh day_02
```

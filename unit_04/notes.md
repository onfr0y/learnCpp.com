# 📝 Unit 04: Fundamental Data Types

## 🎯 LearnCpp.com Readings
- **Chapter 4**: Fundamental Data Types

---

## 💡 Key Concepts & Best Practices

### 1. C++ Integer Widths
C++ only guarantees minimum sizes for fundamental integer types.
If you need exact-width integers (e.g. for hardware design, communication protocols, file headers), include `<cstdint>` and use:
- `std::int8_t`, `std::uint8_t`
- `std::int16_t`, `std::uint16_t`
- `std::int32_t`, `std::uint32_t`
- `std::int64_t`, `std::uint64_t`

### 2. Standard Index Type: `std::size_t`
- Defined in `<cstddef>`.
- An unsigned integer type used to represent sizes of objects.
- Adjusts size according to the target architecture (32-bit vs 64-bit).
- **Rule**: Avoid mixing signed and unsigned integer arithmetic to prevent overflow/underflow bugs.

### 3. Floating-Point Rounding Errors
Because decimals like `0.1` cannot be represented precisely in binary (IEEE 754), rounding errors happen.
- **Rule**: Never use `==` or `!=` to compare floating-point numbers. Instead, use an epsilon comparison.

### 4. Explicit Type Conversion: `static_cast`
C-style casting (e.g., `(int)pi`) is unsafe and discouraged.
- **Modern C++**: Use `static_cast<new_type>(expression)`. It is compile-time checked, explicit, and easy to find in the source.

---

## 🏃 Run the Code
```bash
./run.sh unit_04
```

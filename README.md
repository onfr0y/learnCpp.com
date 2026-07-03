# 📚 LearnCpp.com Daily Study Project

> **C++ Study Repository & Daily Curriculum**
> Designed for **Khaotang (Onfroy)** | Incoming Electrical Engineering Student at SIIT
> Focus: Transitioning from C/JS/TS to Modern C++ (C++20) with EE applications.

---

## 🛠️ Project Structure & Building

This repository is structured as a single CMake project with daily units as subdirectories. Each daily subfolder has its own isolated target, allowing you to build and run them separately or all at once.

### Prerequisites
- **CMake** (v3.15 or newer)
- **Compiler supporting C++20** (GCC 10+, Clang 10+, or MSVC 2019+)

### Build Instructions
Open your terminal and run the following commands from the root directory:

```bash
# Create build directory
mkdir -p build && cd build

# Configure the project
cmake ..

# Build all targets
cmake --build .

# Run a specific day's executable (e.g., Day 01)
./day_01/day_01_bin
```

---

## 📅 The 30-Day Modern C++ Curriculum

Since you already have a strong foundation in **C** and **JavaScript/TypeScript**, this curriculum focuses on the distinct features of modern C++, RAII (Resource Acquisition Is Initialization), memory safety, object-oriented design, templates, standard containers, and EE-relevant simulations.

| Day | Topic | LearnCpp.com Chapters | Focus / Key Concepts | Daily Code Project |
| :--- | :--- | :--- | :--- | :--- |
| **01** | [Setup & C++ Basics](./day_01) | Chapters 1 & 2 | Standard streams (`std::cout`, `std::cin`), namespaces, functions, header files, preprocessor directives. | Basic I/O, user interaction, namespaces. |
| **02** | [Debugging & Fundamental Types](./day_02) | Chapters 3 & 4 | Debugging strategies, integer widths, `std::size_t`, floating-point issues, type casting (`static_cast`). | Precision analyzer, safe casting tools. |
| **03** | [Constants, Strings & Operators](./day_03) | Chapters 5 & 6 | `const`, `constexpr`, `consteval`, `std::string`, `std::string_view` (and why it matters), operator precedence. | Constant string utility, compile-time computations. |
| **04** | [Scope, Duration & Linkage](./day_04) | Chapter 7 | Local & global variables, static duration, internal/external linkage, namespaces, inline variables. | Global configuration system simulator. |
| **05** | [Control Flow & Error Handling](./day_05) | Chapters 8 & 9 | `switch` statements, loops, defensive programming, `assert`, `static_assert`. | Command-line menu parser & static verification. |
| **06** | [Type Conversion & Templates](./day_06) | Chapters 10 & 11 | Implicit/explicit conversions, function overloading, function templates, auto type deduction. | Generic math helpers, unit conversion template. |
| **07** | [References & Pointers](./day_07) | Chapter 12 | Lvalue references, const references (pass by const ref), raw pointers, const pointers, references vs pointers. | Address inspector & reference speed benchmark. |
| **08** | [Enums & Structs](./day_08) | Chapter 13 | Scoped enums (`enum class`), structs, member selection, default initialization, padding/size. | **EE Special:** Resistor band calculator. |
| **09** | [Introduction to Classes](./day_09) | Chapter 14 | Public vs private access, member functions, constructors, member initializer lists, const class objects/methods. | **EE Special:** AC Circuit Element (Impedance calculator). |
| **10** | [More on Classes](./day_10) | Chapter 15 | Friend functions/classes, nested types, static member variables/functions, class templates. | System parameters manager. |
| **11** | [Dynamic Arrays: std::vector](./day_11) | Chapter 16 | `std::vector` basics, sizing, capacity, loops (range-based for), stack behavior. | Dynamic trace log buffer. |
| **12** | [Fixed Arrays, Iterators & Algorithms](./day_12) | Chapters 17 & 18 | `std::array`, C-style arrays, multidimensional arrays, iterators, standard algorithms (`std::sort`, `std::find`). | **EE Special:** Signal sampler & basic filtering. |
| **13** | [Memory: Dynamic Allocation](./day_13) | Chapter 19 | `new` and `delete`, dynamically allocating arrays (why to avoid them in modern C++). | Dynamic memory leak simulation & checker. |
| **14** | [Functions Deep Dive](./day_14) | Chapter 20 | Function pointers, `std::function`, lambda expressions, recursion. | **EE Special:** Function generator / Signal mapper. |
| **15** | [Object Relations](./day_15) | Chapter 21 | Composition, aggregation, association, container classes. | Network node routing simulation. |
| **16** | [Inheritance](./day_16) | Chapter 22 | Derived classes, construction order, calling parent constructors, access specifiers. | Device hierarchy (Sensor -> AnalogSensor). |
| **17** | [Virtual Functions & Polymorphism](./day_17) | Chapter 23 | Virtual functions, override/final, virtual destructors, abstract classes, interfaces. | **EE Special:** Oscilloscope input simulator. |
| **18** | [Templates & Specialization](./day_18) | Chapter 24 | Class templates, template specialization, expression parameters. | Matrix type class for linear algebra. |
| **19** | [Exceptions](./day_19) | Chapter 25 | Try/catch/throw, exception hierarchy, custom exceptions, `noexcept`. | Safe parser for engineering data formats. |
| **20** | [Move Semantics & Smart Pointers](./day_20) | Chapter 26 | `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`, move constructors, `std::move`. | Hardware driver resource manager (RAII). |
| **21** | [Input/Output (I/O) & Files](./day_21) | Chapter 27 | File streams (`std::ifstream`, `std::ofstream`), string streams, I/O manipulators. | Configuration file reader/writer. |
| **22** | [STL Containers & Algorithms](./day_22) | Chapter 28 | Sequential vs associative containers (`std::map`, `std::unordered_map`, `std::set`), STL algorithms. | Components inventory DB. |
| **23-30** | [Capstone Engineering Projects](./capstones) | Custom | Focus on EE applications (DSP filters, circuit simulators, logic gate simulation, state machines). | High-fidelity simulations. |

---

## 🎨 Minimalist Code Style (Muji Aesthetic)

To keep the workspace clean, maintainable, and aligned with your design tastes:
1. **Prefer `const` and `constexpr`**: Keep variables immutable by default.
2. **Modern C++ Guidelines**: Use smart pointers, `std::vector`, and `std::string_view` instead of raw memory / raw pointers where appropriate.
3. **Descriptive Namespaces**: Wrap related functions and classes in clean namespaces to avoid pollution.
4. **Self-Documenting Code**: Focus on clear variable names, clean formatting, and high readability. Keep comment notes in the local `notes.md` file rather than cluttering `main.cpp`.

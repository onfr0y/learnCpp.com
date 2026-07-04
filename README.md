# 📚 LearnCpp.com Study Project

> **C++ Study Repository & Curriculum organized by Chapters/Units**
> Designed for **Khaotang (Onfroy)** | Incoming Electrical Engineering Student at SIIT
> Focus: Transitioning from C/JS/TS to Modern C++ (C++20) with EE applications.

---

## 🛠️ Project Structure & Building

This repository is structured as a single CMake project with unit subdirectories. Each subfolder has its own isolated target, allowing you to build and run them separately.

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

# Run a specific unit's executable (e.g., Unit 01)
./unit_01/unit_01_bin
```

Alternatively, you can compile and execute a specific unit immediately using the root runner script:
```bash
./run.sh unit_01
```

---

## 📅 The Modern C++ Curriculum (Unit-by-Unit)

Since you already have a strong foundation in **C** and **JavaScript/TypeScript**, this curriculum focuses on the distinct features of modern C++, RAII (Resource Acquisition Is Initialization), memory safety, object-oriented design, templates, standard containers, and EE-relevant simulations.

| Unit | Topic | LearnCpp.com Chapters | Focus / Key Concepts | Code Project |
| :--- | :--- | :--- | :--- | :--- |
| **01** | [C++ Basics](./unit_01) | Chapter 1 | Standard streams (`std::cout`, `std::cin`), variable initialization, standard output formatting. | Basic I/O, user interaction. |
| **02** | [Functions and Files](./unit_02) | Chapter 2 | Function syntax, parameters, return values, forward declarations, header files/guards. | Function call structure & prototypes. |
| **03** | [Debugging](./unit_03) | Chapter 3 | Debugging strategies, compilation warning flags, debugger controls, call stack inspection. | Step-by-step debugger setup. |
| **04** | [Fundamental Data Types](./unit_04) | Chapter 4 | Integer widths (`<cstdint>`), `std::size_t`, floating-point rounding errors, `static_cast` type casting. | Float precision analyzer & casting tools. |
| **05** | [Constants and Strings](./unit_05) | Chapter 5 | `const`, `constexpr`, `consteval`, `std::string`, `std::string_view` (lifetime & efficiency). | Compile-time computation & string view demo. |
| **06** | [Operators](./unit_06) | Chapter 6 | Operator precedence, associativity, arithmetic and relational operations. | Operator evaluation demonstration. |
| **07** | Scope, Duration & Linkage | Chapter 7 | Local & global variables, static duration, internal/external linkage, namespaces, inline variables. | Global configuration system simulator. |
| **08** | Control Flow | Chapter 8 | `switch` statements, loops, break/continue. | Command-line menu parser. |
| **09** | Error Handling & Asserts | Chapter 9 | Defensive programming, `assert`, `static_assert`. | Static verification helpers. |
| **10** | Type Conversion & Overloading | Chapter 10 | Implicit/explicit conversions, function overloading, auto type deduction. | Type conversion simulator. |
| **11** | Function Templates | Chapter 11 | Writing and using templates, type deduction. | Generic math helpers template. |
| **12** | References & Pointers | Chapter 12 | Lvalue references, const references, raw pointers, const pointers, pointers vs references. | Address inspector & speed benchmark. |
| **13** | Enums & Structs | Chapter 13 | Scoped enums (`enum class`), structs, padding, initialization. | **EE Special:** Resistor band calculator. |
| **14** | Introduction to Classes | Chapter 14 | Public vs private, constructors, member initializer lists, const objects. | **EE Special:** AC Circuit Impedance calculator. |
| **15** | More on Classes | Chapter 15 | Friend functions, static members, nested types, class templates. | System parameters manager. |
| **16** | Dynamic Arrays: std::vector | Chapter 16 | Vector basics, capacity/sizing, range-based for loops. | Dynamic trace log buffer. |
| **17** | Fixed Arrays, Iterators & Algorithms | Chapters 17 & 18 | `std::array`, C-style arrays, iterators, standard algorithms (`std::sort`, `std::find`). | **EE Special:** Signal sampler & basic filtering. |
| **18** | Memory: Dynamic Allocation | Chapter 19 | `new` and `delete`, dynamic memory safety. | Dynamic memory leak detector. |
| **19** | Functions Deep Dive | Chapter 20 | Function pointers, lambdas, recursion. | **EE Special:** Function generator / Signal mapper. |
| **20** | Object Relations | Chapter 21 | Composition, aggregation, association, container classes. | Network node routing simulation. |
| **21** | Inheritance | Chapter 22 | Derived classes, construction order, access specifiers. | Device hierarchy (Sensor -> AnalogSensor). |
| **22** | Virtual Functions & Polymorphism | Chapter 23 | Virtual functions, override, virtual destructors, interfaces. | **EE Special:** Oscilloscope input simulator. |
| **23** | Templates & Specialization | Chapter 24 | Class templates, specialization, expression parameters. | Matrix type class for linear algebra. |
| **24** | Exceptions | Chapter 25 | Try/catch/throw, custom exceptions, `noexcept`. | Safe parser for engineering data formats. |
| **25** | Move Semantics & Smart Pointers | Chapter 26 | `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`, move constructors. | Hardware driver resource manager (RAII). |
| **26** | Input/Output (I/O) & Files | Chapter 27 | File streams (`std::ifstream`, `std::ofstream`), string streams. | Configuration file reader/writer. |
| **27** | STL Containers & Algorithms | Chapter 28 | Sequential vs associative containers, maps, sets, unordered containers. | Components inventory DB. |
| **28-30** | Capstone Engineering Projects | Custom | Focus on EE applications (DSP filters, circuit simulators, state machines). | High-fidelity simulations. |

---

## 🎨 Minimalist Code Style (Muji Aesthetic)

To keep the workspace clean, maintainable, and aligned with your design tastes:
1. **Prefer `const` and `constexpr`**: Keep variables immutable by default.
2. **Modern C++ Guidelines**: Use smart pointers, `std::vector`, and `std::string_view` instead of raw memory / raw pointers where appropriate.
3. **Descriptive Namespaces**: Wrap related functions and classes in clean namespaces to avoid pollution.
4. **Self-Documenting Code**: Focus on clear variable names, clean formatting, and high readability. Keep comment notes in the local `notes.md` file rather than cluttering `main.cpp`.

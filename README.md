# 42 C++ Modules 00–04

Welcome to the **42 C++ Modules 00_04** project!  
This repository contains a series of exercises from modules 00 to 04 of the 42 school's C++ curriculum. Each module introduces new concepts in C++ programming, focusing on the basics, object-oriented programming, inheritance, polymorphism, and more.

---

## 📚 Structure

The repository is organized as follows:

- **Module 00:** C++ basics, Phonebook app, Account management.
- **Module 01:** File operations, string manipulation, basic classes.
- **Module 02:** Fixed-point arithmetic, copy constructors, geometric calculations.
- **Module 03:** Inheritance, class hierarchies, RPG-inspired exercises.
- **Module 04:** Polymorphism, abstract classes, deep copying, dynamic memory.

Each module contains several exercises (`ex00`, `ex01`, etc.), with their own source files and Makefiles.

---

## 🛠️ Building & Running

Most exercises come with a `Makefile` for easy compilation.  
To build an exercise, run:

```sh
make
```

To clean up generated files:

```sh
make clean
```

To remove executables:

```sh
make fclean
```

---

## 🚀 Getting Started

Clone the repository:

```sh
git clone https://github.com/fabiosilva24/42-cpp-modules-00_04.git
```

Navigate to the desired module and exercise folder, then build and run the project as described above.

---

## 🎨 Make It Colorful!

Want your terminal output to pop?  
You can use **ANSI color codes** in your code for more vibrant messages:

```cpp
#define GREEN   "\033[0;32m"
#define CYAN    "\033[0;36m"
#define YELLOW  "\033[1;33m"
#define MAGENTA "\033[0;35m"
#define RED     "\033[0;31m"
#define RESET   "\033[0m"

// Example usage:
std::cout << GREEN << "Build succeeded!" << RESET << std::endl;
```

Check out the Makefiles and source code—many exercises already use colored output for feedback, errors, and status messages.  
Feel free to add even more color to make your experience enjoyable!

---
## 📝 License

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

This project is for educational purposes and follows the 42 school curriculum.  

---

Happy coding!  
May your terminal always be vibrant! 🌈

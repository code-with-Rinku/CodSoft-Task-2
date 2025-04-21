# 🧮 Simple Calculator using C++

This is a **console-based calculator application** written in C++ that allows users to perform basic arithmetic operations such as **addition, subtraction, multiplication**, and **division**. It uses **OOP concepts** (Object-Oriented Programming) and is built using the `class` and `methods` structure.

> ✅ Developed as part of the **CodSoft Internship – C++ Development Track (Task 2)**.

---

## 📌 Features

- 📥 Accepts two numbers from the user
- ➕ Addition
- ➖ Subtraction
- ✖️ Multiplication
- ➗ Division with zero-division check
- 🔁 Menu-driven program using a `do-while` loop
- 🧠 Clear separation of logic using a class named `calculator`

---

## 🛠️ Tech Stack

- **Language**: C++
- **Compiler**: g++ / Code::Blocks / Visual Studio Code
- **Standard**: C++11 or later

---

## 📋 Code Overview

- `calculator` class contains methods:
  - `add(int, int)`
  - `sub(int, int)`
  - `mul(int, int)`
  - `div(double, double)`
- `main()` handles user input and displays a menu for operations.
- Division method includes a **zero check** to avoid runtime errors.

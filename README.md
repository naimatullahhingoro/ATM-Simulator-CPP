# 🏧 ATM Machine System in C++

A simple **ATM Machine System** built using **C++** as a Programming Fundamentals project.

This project demonstrates the use of basic C++ concepts such as **variables, input/output, if-else statements, switch statements, loops, and nested loops**.

## 📌 Features

- 🔐 PIN authentication
- 🔄 Maximum 3 PIN attempts
- 💰 Check account balance
- 💵 Deposit money
- 💸 Withdraw money
- ❌ Prevent withdrawal when the amount is greater than the balance
- 🚪 Exit the ATM system
- 🔁 Option to perform multiple transactions
- 🔒 Account gets frozen after incorrect PIN attempts

## 🛠️ Concepts Used

This project was created using basic Programming Fundamentals concepts:

- Variables
- `cin` and `cout`
- `if`, `else`
- `switch`
- `while` loop
- `do-while` loop
- Nested loops
- Arithmetic operators
- Comparison operators
- Logical operators

## ⚙️ How It Works

### 1. PIN Authentication

The user is asked to enter a 4-digit PIN.

The user gets **3 attempts** to enter the correct PIN. If all attempts are incorrect, the account is frozen.

### 2. ATM Menu

After successful authentication, the user can choose from:

```text
1. Check Account Balance
2. Deposit
3. Withdraw
4. Exit

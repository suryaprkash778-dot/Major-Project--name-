# 🔐 Password Manager in C

## 📌 Project Summary
This project is a secure, console-based password manager developed in C. It allows users to store, retrieve, search, and delete login credentials locally. Passwords are encrypted using a simple XOR cipher before being saved to a binary file. The program is modular, user-friendly, and demonstrates key programming concepts such as file handling, dynamic memory management, and pointer-based string manipulation.

## ✨ Features
- Add new credentials (website, username, password)
- View all saved credentials
- Search credentials by website or username
- Delete credentials
- Encrypt/decrypt passwords using XOR cipher
- Optional master password protection

## 🧠 Concepts Demonstrated
- **Structures and functions**: Used to define and manipulate credential records
- **File operations**: `fopen`, `fwrite`, `fread`, `remove`, `rename` for persistent storage
- **Pointer-based string manipulation**: For encryption, input parsing, and dynamic handling
- **Dynamic memory management**: Allocating memory for credential arrays and strings
- **Modular programming using header files**: Organized into reusable components for clarity and scalability

## 🛠️ Compilation & Execution

### 🔧 Compile
Use GCC or any standard C compiler:
```bash
gcc main.c passwords.c encryption.c storage.c auth.c -o password_manager

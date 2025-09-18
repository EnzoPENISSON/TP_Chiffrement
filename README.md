# Matrix & Cryptography Utilities

This project contains simple C++ implementations for working with matrices and classical ciphers (Caesar, Vigenère), as well as some utility functions.

---

## ✨ Features
- Compute the **determinant** of a 2x2 matrix.
- Check if a matrix is **invertible modulo n**.
- Perform **matrix addition** and **matrix multiplication**.
- Classical cipher algorithms:
    - **Caesar cipher** (encryption & decryption).
    - **Vigenère cipher** (encryption & decryption).
- Small helper utilities.

---

## ⚙️ Build & Run
Make sure you have **CMake** and a **C++17+** compiler installed.

```bash
# Create build directory
mkdir build
cd build

# Configure & build
cmake ..
make

# Run program
./TP_Chiffrement

# Run Test
./runTests
```

## 📦 Requirements

C++17 or newer (std::gcd is used, available since C++17).

- CMake ≥ 3.10.
- A standard compiler:
- GCC
- Clang
- MSVC

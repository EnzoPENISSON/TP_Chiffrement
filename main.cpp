#include <iostream>
#include "Algo/cesar.h"
#include "Algo/vigenere.h"
#include "Algo/matrice.h"

using namespace std;

int main() {
    // TP César
    cout << "César:" << endl;
    cout << cesar("hello",3) << endl;
    cout << cesar("khoor",3,true) << endl;


    // TP Vigenere
    cout << endl << "Vigenere:" << endl;
    cout << vigenere("bonjour", "clef") << endl;
    cout << vigenere("dzroqfv", "clef",true) << endl;


    // TP Matrix
    Matrix A = {{1, 2}, {3, 4}}; // Matrix A
    Matrix B = {{5, 6}, {7, 8}}; // Matrix B

    // Sum two matrix
    Matrix sum = addMatrices(A, B);

    cout << "Result:\n";
    printMatrix(sum);

    // Mul two matrix
    Matrix mult = multMatrices(A, B);
    cout << "Result:\n";
    printMatrix(mult);

    // Determinant
    cout << "Result:" << endl;
    const int detA = determinant2x2(A);
    cout << "Matrix A det : " << detA <<  endl;
    const int detB = determinant2x2(B);
    cout << "Matrix B det : " << detB<< endl;

    // Verify if the matrix can be reversed
    cout << endl;
    int mod = 3;
    if (isInvertibleModuloN(A, mod)) {
        std::cout << "Matrix A is invertible mod " << mod << "\n";
    } else {
        std::cout << "Matrix A is NOT invertible mod " << mod << "\n";
    }

    cout << endl;
    if (isInvertibleModuloN(B, mod)) {
        std::cout << "Matrix B is invertible mod " << mod << "\n";
    } else {
        std::cout << "Matrix B is NOT invertible mod " << mod << "\n";
    }

    return 0;
}


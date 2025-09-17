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
    return 0;
}


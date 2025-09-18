#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

// Define Matrix as an alias for 2D vector
using Matrix = std::vector<std::vector<int>>;

void printMatrix(const Matrix& A);

Matrix addMatrices(const Matrix& A, const Matrix& B);

Matrix multMatrices(const Matrix& A, const Matrix& B);

int determinant2x2(const Matrix& A);

bool isInvertibleModuloN(const Matrix& A, int n);

#endif // MATRIX_H

#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>

// Define Matrix as an alias for 2D vector
using Matrix = std::vector<std::vector<int>>;

void printMatrix(const Matrix& A);

Matrix addMatrices(const Matrix& A, const Matrix& B);

Matrix multMatrices(const Matrix& A, const Matrix& B);

#endif // MATRIX_H

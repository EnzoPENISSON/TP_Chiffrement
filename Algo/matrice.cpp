#include <iostream>
#include <vector>
#include <numeric>
#include "matrice.h"

using namespace std;

using Matrix = vector<vector<int>>;

/**
 * Function to render a matrix on a terminal
 */
void printMatrix(const Matrix& A) {
    cout << endl;
    for (int i = 0; i < A.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < A[0].size(); j++) {
            cout << A[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

/**
 * Function to addition two matrix
 */
Matrix addMatrices(const Matrix& A, const Matrix& B) {
    int rows = A.size(); // matrix A row size
    int cols = A[0].size(); // matrix A column size
    Matrix result(rows, vector<int>(cols)); // initialise the matrix of matrix

    for (int i = 0; i < rows; i++) { // loop rows
        for (int j = 0; j < cols; j++) { // loop columns
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

/**
 * Function to mul two matrix
 */
Matrix multMatrices(const Matrix& A, const Matrix& B) {
    int rows = A.size();
    int cols = A[0].size();

    Matrix result(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0; // initialise the value to 0
            for (int k = 0; k < cols; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

/**
 * Calculate the determinant of a 2 by 2 matrix
 * using this formula
 * [a b]
 * [c d]
 * (a x d) - (b x c)
 */
int determinant2x2(const Matrix& A) {
    if (A.size() != 2 || A[0].size() != 2 || A[1].size() != 2) { // verify the size of the matrix is 2 by 2
        throw invalid_argument("Matrix must be 2x2");
    }
    return (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
}

/**

 */
bool isInvertibleModuloN(const Matrix& A, int n) {
    int det = determinant2x2(A); // Calcul the determinant of a 2 by 2 matrix
    det %= n;
    if (det < 0) det += n; // keep positive mod n

    // Matrix is invertible mod n if gcd(det, n) == 1
    return std::gcd(det, n) == 1;
}
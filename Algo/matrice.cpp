#include <iostream>
#include <vector>
#include "matrice.h"

using namespace std;

using Matrix = vector<vector<int>>;

/*
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

/*
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

/*
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
//
// Created by enzo on 16/09/2025.
//
#include <gtest/gtest.h>
#include "../Algo/matrice.h"

Matrix A = {{1, 2}, {3, 4}}; // Matrix A
Matrix B = {{5, 6}, {7, 8}}; // Matrix B
Matrix C = {{98, 67}, {34, 13}}; // Matrix C
TEST(MatriceTest, HandlesPositiveInput) {
    // Addition
    EXPECT_EQ(addMatrices(A, B),Matrix({{6, 8}, {10, 12}}));
    // Multiplication
    EXPECT_EQ(multMatrices(A, B),Matrix({{19, 22}, {43, 50}}));
    // Determinants
    EXPECT_EQ(determinant2x2(A),-2);
    EXPECT_EQ(determinant2x2(B),-2);
    EXPECT_EQ(determinant2x2(C),-1004);
    // Is Inverted
    EXPECT_EQ(isInvertibleModuloN(A, 5), true);
    EXPECT_EQ(isInvertibleModuloN(B, 7), true);
    EXPECT_EQ(isInvertibleModuloN(C, 3), true);

}
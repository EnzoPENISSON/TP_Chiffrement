//
// Created by enzo on 16/09/2025.
//
#include <gtest/gtest.h>
#include "../Algo/vigenere.h"

TEST(VigenereTest, HandlesPositiveInput) {
    EXPECT_EQ(vigenere("bonjour","clef"), "dzroqfv");
    EXPECT_EQ(vigenere("dzroqfv","clef", true), "bonjour"); // Test decrypt
}
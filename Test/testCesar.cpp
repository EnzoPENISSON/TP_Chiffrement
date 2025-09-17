//
// Created by enzo on 16/09/2025.
//
#include <gtest/gtest.h>
#include "../Algo/cesar.h"

TEST(CesarTest, HandlesPositiveInput) {
    EXPECT_EQ(cesar("hello",3), "khoor");
    EXPECT_EQ(cesar("khoor",3,true), "hello"); // Test decrypt

    EXPECT_EQ(cesar("HELLO",3), "KHOOR");
    EXPECT_EQ(cesar("KHOOR",3,true), "HELLO"); // Test decrypt

    EXPECT_EQ(cesar("MOI0",3), "PRL0");
}
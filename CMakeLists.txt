cmake_minimum_required(VERSION 4.0)
project(TP_Chiffrement)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_executable(TP_Chiffrement
        main.cpp
        Algo/cesar.cpp
)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests
        Test/testCesar.cpp
        Algo/cesar.cpp
)

target_link_libraries(runTests GTest::GTest GTest::Main pthread)

add_test(NAME runTests COMMAND runTests)
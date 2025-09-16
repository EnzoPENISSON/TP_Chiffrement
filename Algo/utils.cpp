//
// Created by enzo on 16/09/2025.
//
#include <string>
#include "utils.h"

using namespace std;

const string alphabet = "abcdefghijklmnopqrstuvwxyz"; // lower case
const string alphabetMaj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // upper case

/*
 * Function that return the position of a letter in the alphabet
 */
int positionAlphabet(const char letter) {

    for (int i = 0; i < alphabet.size(); i++) {
        if (alphabet[i] == letter or alphabetMaj[i] == letter) { // letter position found
            return i;
        }
    }

    return -1; // wrong character
}

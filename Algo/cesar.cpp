#include <iostream>
#include <string>
#include <gtest/gtest.h>

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

/*
 * Cesar function
 * 3 parameters :
 *  - string word -> the word to cipher or decipher
 *  - int k -> the offset
 *  - bool decipher -> default false, if set to true decipher the word
*/
string cesar(const string& word, int k, bool decipher = false) {
    string result; // result variable

    for (int i = 0; i <= word.size() - 1; i++) {
        int pos = positionAlphabet(word[i]);
        if (pos == -1) { // Character not found
            return "ERROR";
        }
        int mouv = (pos + k) % 26;
        if (decipher) {
            mouv = (pos - k) % 26;
        }
        result += alphabet[mouv];
    }

    return result;
}

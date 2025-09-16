#include <string>
#include "utils.h"

using namespace std;

string vigenere(string plainText, string key, bool decipher = false) {
    string result;
    string newKey = key;
    if (key.length() < plainText.length()) {
        int diff = plainText.length() - key.length();
        for (int i = 0; i < diff; i++) {
            newKey += key[i % key.length()];
        }
    }

    for (int i = 0; i < plainText.length(); i++) {
        int pos = positionAlphabet(plainText[i]);
        int poskey = positionAlphabet(newKey[i]);
        int newpos = (pos + poskey) % 26;
        if (decipher) {
            newpos = (pos - poskey + 26) % 26;
        }

        result += alphabet[newpos];
    }

    return result;
}
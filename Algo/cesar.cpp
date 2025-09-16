#include <string>
#include "utils.h"

using namespace std;

/*
 * Cesar function
 * 3 parameters :
 *  - string word -> the word to cipher or decipher
 *  - int k -> the offset
 *  - bool decipher -> default false, if set to true decipher the word
*/
string cesar(const string& word, int k, bool decipher = false) {
    string result; // result variable
    k = decipher ? -k : k;
    for (int i = 0; i <= word.size() - 1; i++) {
        int pos = positionAlphabet(word[i]);
        int mouv = (pos + k) % 26;
        if (pos == -1) { // Character not found
            result += word[i];
            continue;
        }
        if (isupper(word[i])) {
            result += alphabetMaj[mouv];
        } else {
            result += alphabet[mouv];
        }
    }

    return result;
}

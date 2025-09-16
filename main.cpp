#include <iostream>
#include "Algo/cesar.cpp"
#include "Algo/vigenere.cpp"

using namespace std;

int main() {
    cout << "César:" << endl;
    cout << cesar("hello",3) << endl;
    cout << cesar("khoor",3,true) << endl;

    cout << endl << "Vigenere:" << endl;
    cout << vigenere("bonjour", "clef") << endl;
    cout << vigenere("dzroqfv", "clef",true) << endl;
    return 0;
}


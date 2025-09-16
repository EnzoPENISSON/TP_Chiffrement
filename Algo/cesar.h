#ifndef CESAR_H
#define CESAR_H

#include <string>

int positionAlphabet(char c);
std::string cesar(const std::string& texte, int cle, bool decrypt = false);

#endif

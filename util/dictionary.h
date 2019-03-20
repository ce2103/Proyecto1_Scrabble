/**
 * @file dictionary.h
 * @version 1.0
 * @date 20/03/2019
 * @autor angelortizv
 * @title Search words in a dictionary
 * @brief
 * @code
 *      dictionary d;
 *      d.searchWord("palabra");
 * @endcode
 */

#ifndef PROYECTO1_SCRABBLE_DICTIONARY_H
#define PROYECTO1_SCRABBLE_DICTIONARY_H

#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class dictionary {

public:
    ifstream dictionary;
    string word;
    bool isFound = false;

    bool searchWord(string _word);


};

#endif //PROYECTO1_SCRABBLE_DICTIONARY_H

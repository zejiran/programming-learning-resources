//
// Created by Juan Alegría on 13/02/21.
//
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 * Task Šifra
    Knight Borna is trying to decipher secret letters of his enemies. He recently came into possession of a special
    piece of paper that is used for the cipher. The paper contains a single word, made up of lowercase letters and digits.
    The secret code is the number of distinct integers that appear in the word, when all letters are replaced with
    whitespace. The integers are written without leading zeroes.
    Since Borna is not very good with numbers, he turned to you for help.
 * Input
    The first line contains a word of length between 1 and 100. The word contains only lowercase letters and digits.
    All integers in it have at most three digits.
 * Output
    Output the secret code.
*/

bool checkExists(string actual, const vector <string> &old) {
    if (actual.empty()) {
        return true;
    }

    for (string oldC : old) {
        if (actual == oldC) {
            return true;
        }
    }

    return false;
}

int mainSifra() {
    string rawMessage;
    cin >> rawMessage;
    int counter = 0;
    vector <string> e;
    string actualSet;

    for (char c : rawMessage) {
        if (isdigit(c)) {
            actualSet += c;
        } else if (isalpha(c)) {
            bool exists = checkExists(actualSet, e);
            if (!exists) {
                e.push_back(actualSet);
                counter++;
            }

            actualSet.clear();
        }
    }
    if (!actualSet.empty()) {
        bool exists = checkExists(actualSet, e);
        if (!exists) {
            e.push_back(actualSet);
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
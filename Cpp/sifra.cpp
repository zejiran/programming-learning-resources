//
// Created by Juan Alegría on 13/02/21.
//
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

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

int main() {
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
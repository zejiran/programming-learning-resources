//
// Created by Juan Alegría on 13/02/21.
//
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 * Task Po
    Tinky Winky left a sequence of n zeroes in the Tubbytronic Superdome, and left for a walk with Dipsy. When he came
    back, he saw that a misdeed has been done. The sequence was changed, and Po was smiling mischeviously in the
    corner of the room.
    Oh dear! Po, what have you done?! – asked Tinky Winky in horror.
    I enhanced the sequence! – replied Po.
    After cross-examination, it was established that Po did a number of enhancements on the sequence. In every
    enhancement, she took a segment of a sequence and increased all elements in the segment by some positive integer.
    Also, every two segments were either disjoint or one was completely contained in other.
    How many enhancements have you done, Po? – Laa-Laa inquired.
    I really don’t know! I’m only sure I did the minimum number of enhancements possible to get this
    sequence! – said Po exhaustedly.
    Then it surely must be m! – proclaimed Noo-Noo. 1
    What number did Noo-Noo say?
 * Input
    The first line contains an integer n (1 ≤ n ≤ 100 000), the length of the sequence.
    The second line contains n nonnegative integers ai (0 ≤ ai ≤ 109), the sequence after Po’s enhancements.
 * Output
    Output m, the minimum possible number of enhancements.
*/

int mainPoo() {
    int n, e = 0;
    bool repeated;
    scanf("%d", &n);
    vector<int> sequence;

    for (int i = 0; i < n; i++) {
        int actual;
        cin >> actual;
        sequence.push_back(actual);
    }

    for (int i = 0; i < sequence.size(); i++) {
        if (sequence[i] == sequence[i + 1] and !repeated){
            sequence.erase(sequence.begin()+i);
            repeated = true;
            e++;
        } else {
            repeated = false;
        }
    }

    cout << e;

    return 0;
}
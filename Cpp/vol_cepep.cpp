//
// Created by Juan Alegría on 2/02/21.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// --------------------------------------------
int solveMeFirst(int a, int b) {
    return a + b;
}

int mainFirst() {
    int num1, num2;
    int sum;
    cin >> num1 >> num2;
    sum = solveMeFirst(num1, num2);
    cout << sum;

    return 0;
}

// --------------------------------------------
int mainHelloWorld() {
    printf("Hello, World!");
    return 0;
}

// --------------------------------------------
int mainSum() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    cout << sum << endl;

    return 0;
}

// --------------------------------------------
int mainDataTypes() {
    int d;
    long ld;
    char ch;
    float f;
    double lf;

    scanf("%d %ld %c %f %lf", &d, &ld, &ch, &f, &lf);
    printf("%d\n%ld\n%c\n%f\n%lf", d, ld, ch, f, lf);

    return 0;
}

// --------------------------------------------
int mainSimpleConditionals() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n == 9) {
        printf("nine");
    } else if (n == 8) {
        printf("eight");
    } else if (n == 7) {
        printf("seven");
    } else if (n == 6) {
        printf("six");
    } else if (n == 5) {
        printf("five");
    } else if (n == 4) {
        printf("four");
    } else if (n == 3) {
        printf("three");
    } else if (n == 2) {
        printf("two");
    } else if (n == 1) {
        printf("one");
    } else {
        if (n > 9) {
            printf("Greater than 9");
        }
    }

    return 0;
}
// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

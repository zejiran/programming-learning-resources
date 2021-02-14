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
int mainForLoop() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (1 <= i and i <= 9) {
            if (i == 1) {
                printf("one\n");
            } else if (i == 2) {
                printf("two\n");
            } else if (i == 3) {
                printf("three\n");
            } else if (i == 4) {
                printf("four\n");
            } else if (i == 5) {
                printf("five\n");
            } else if (i == 6) {
                printf("six\n");
            } else if (i == 7) {
                printf("seven\n");
            } else if (i == 8) {
                printf("eight\n");
            } else if (i == 9) {
                printf("nine\n");
            }
        } else {
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}

// --------------------------------------------
int maxOfFour(int a, int b, int c, int d) {
    if (a > b and a > c and a > d) {
        return a;
    } else if (b > c and b > d) {
        return b;
    } else if (c > d) {
        return c;
    } else {
        return d;
    }
}

int mainSimpleFunctions() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = maxOfFour(a, b, c, d);
    printf("%d", ans);

    return 0;
}

// --------------------------------------------
void update(int *a, int *b) {
    int oa = *a, ob = *b;
    *a = oa + ob, *b = abs(oa - ob);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

// --------------------------------------------

// --------------------------------------------
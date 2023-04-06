#include <stdio.h> //mod1

int main() {
    int a = 24;
    int b = 36;
    int temp, gcd;

    while (b != 0) {
        temp = b; // temp == 36
        b = a % b; //b == 24
        a = temp; // a == 36
    }

    gcd = a;
    printf("최대공약수: %d\n", gcd);

    int c = 15;
    int d = 25;

    a = c;
    b = d;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    printf("최대공약수: %d\n", gcd);

    int e = 40;
    int f = 60;

    a = e;
    b = f;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    printf("최대공약수: %d\n", gcd);

    return 0;
}

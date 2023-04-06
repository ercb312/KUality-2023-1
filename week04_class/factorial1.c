#define _CRT_SECURE_NO_WARNINGS //factorial1
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int fact(int x) {
    if (x == 1)
        return 1;
    else
        return (x * fact(x - 1));

}
int main() {
    int x;
    printf("팩토리얼을 구하고 싶은 정수를 입력하시오: ");
    scanf("%d", &x);
    printf("%d\n", fact(x));
}

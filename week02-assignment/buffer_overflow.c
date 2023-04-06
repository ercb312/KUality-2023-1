#define _CRT_SECURE_NO_WARNINGS //buffer_overflow
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char name[12];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello %s!\n", name);
}

#include <stdio.h> //scanf_vul2

int main(void)
{
    int a;
    printf("enter a number: ");
    while (scanf_s("%d", &a) != 1)
    {
        // input was not a number, ask again:
        printf("enter a number: ");
    }
    printf("You entered %d.\n", a);
}

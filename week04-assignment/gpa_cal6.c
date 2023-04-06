#define _CRT_SECURE_NO_WARNINGS //gpa_cal6
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int main() {
    char grade[3]; // 문자열을 받기 위해 배열 사용 
    int total = 0, count = 0;

    printf("Enter grades (A+, A, B+, B, C+, C, D+, D, F):\n");

    while (scanf("%2s", grade) == 1) { // 최대 2자리 문자열로 입력받음
        if (count > 6)  break;

        if (grade[1] == '+') {
            switch (grade[0]) {
            case 'A':
                total += 4.5;
                break;
            case 'B':
                total += 3.5;
                break;
            case 'C':
                total += 2.5;
                break;
            case 'D':
                total += 1.5;
                break;
            case 'F':
                total += 0.0;
                break;
            default: // 잘못된 입력 처리
                printf("Invalid input: %s\n", grade);
                continue; // 다음 입력으로 넘어감
            }
        }

        else { // '+'나 '-'가 없는 일반 학점인 경우
            switch (grade[0]) {
            case 'A':
                total += 4.0;
                break;
            case 'B':
                total += 3.0;
                break;
            case 'C':
                total += 2.0;
                break;
            case 'D':
                total += 1.0;
                break;
            case 'F':
                total += 0.0;
                break;
            default: // 잘못된 입력 처리
                printf("Invalid input: %s\n", grade);
                continue; // 다음 입력으로 넘어감
            }
        }

        count++;
    }

    double average = (double)total / count;
    printf("The average grade is: %.2f", average);

    return 0;
}

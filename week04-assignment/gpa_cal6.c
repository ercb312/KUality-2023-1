#define _CRT_SECURE_NO_WARNINGS //gpa_cal6
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int main() {
    char grade[3]; // ���ڿ��� �ޱ� ���� �迭 ��� 
    int total = 0, count = 0;

    printf("Enter grades (A+, A, B+, B, C+, C, D+, D, F):\n");

    while (scanf("%2s", grade) == 1) { // �ִ� 2�ڸ� ���ڿ��� �Է¹���
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
            default: // �߸��� �Է� ó��
                printf("Invalid input: %s\n", grade);
                continue; // ���� �Է����� �Ѿ
            }
        }

        else { // '+'�� '-'�� ���� �Ϲ� ������ ���
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
            default: // �߸��� �Է� ó��
                printf("Invalid input: %s\n", grade);
                continue; // ���� �Է����� �Ѿ
            }
        }

        count++;
    }

    double average = (double)total / count;
    printf("The average grade is: %.2f", average);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS //array1
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main(void) {
	int i;
	int class1[30]; //�迭�� 0���� ����; class[0]

	for (i = 0; i < 30; i++) {
		printf("1�� %d�� �л��� Ű�� �Է��ϼ���. \n", i + 1);
		scanf("%d", &class1[i]);
		printf("1�� %d�� �л��� Ű�� %d �Դϴ�. \n\n", i + 1, class1[i]);
	}
}

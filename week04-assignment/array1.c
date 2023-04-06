#define _CRT_SECURE_NO_WARNINGS //array1
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main(void) {
	int i;
	int class1[30]; //배열은 0부터 시작; class[0]

	for (i = 0; i < 30; i++) {
		printf("1반 %d번 학생의 키를 입력하세요. \n", i + 1);
		scanf("%d", &class1[i]);
		printf("1반 %d번 학생의 키는 %d 입니다. \n\n", i + 1, class1[i]);
	}
}

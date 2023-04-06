#define _CRT_SECURE_NO_WARNINGS //array2
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main(void) {
	int a[5];
	int i;
	int sum = 0;

	for (i = 0; i < 5; i++) {
		a[i] = i + 1;
		printf("a[%d] = %d\n", i, a[i]);
		sum += a[i];
	}
	printf("모든 배열 요소의 합은 %d\n", sum);
}

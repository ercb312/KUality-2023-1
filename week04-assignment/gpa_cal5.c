#include <stdio.h> //gpa_cal5
int main(void) {
	float g[6];
	int i;
	float sum = 0;
	float average = 0.0;

	for (i = 0; i < 6; i++) {
		printf("%d��° ���� ������ �Է��ϼ���: ", i + 1);
		scanf(" %f", &g[i]);
		sum += g[i];
	}

	average = sum / 6;

	printf("��� ���� ���� ������ %.2f\n", sum);
	printf("���� ��� ���� %.2f\n", average);
} //���ڷ� �Է� �޾Ƽ� �Ǽ��� ���?????? �����C��� -> 7��:�迭

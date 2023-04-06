#include <stdio.h> //gpa_cal5
int main(void) {
	float g[6];
	int i;
	float sum = 0;
	float average = 0.0;

	for (i = 0; i < 6; i++) {
		printf("%d번째 과목 성적을 입력하세요: ", i + 1);
		scanf(" %f", &g[i]);
		sum += g[i];
	}

	average = sum / 6;

	printf("모든 과목 성적 총합은 %.2f\n", sum);
	printf("과목 평균 값은 %.2f\n", average);
} //문자로 입력 받아서 실수로 출력?????? 모두의C언어 -> 7장:배열

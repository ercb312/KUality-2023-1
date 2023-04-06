#define _CRT_SECURE_NO_WARNINGS //gpa_cal6
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int main() {

	int t = 10, q; //total_q, quantity

	reload:
do {
	printf("-------------------메뉴--------------------\n");
	printf("포카리(900\) 2.파워에이드(1000\) 3.레드불(1000\) 4.몬스터(1200\) 5.마운틴듀(700\)\n");
	printf("---------------------------------------------------------------------------\n");
	
	int n = 0;
	printf("메뉴 번호 입력: ");
	scanf(" %d", &n);

	int m = 0; //input money
	int sum = 0; //revenue

		switch (n) {
		case 1:
			printf("포카리\n");
			printf("돈을 넣어주세요\n");
			scanf(" %d", &m);
			printf("거스름돈 %d과 음료를 챙겨주세요\n", m - 900);
			t -= 1;
			sum += 900;
			break;
		case 2:
			printf("파워에이드\n");
			printf("돈을 넣어주세요\n");
			scanf(" %d", &m);
			printf("거스름돈 %d과 음료를 챙겨주세요\n", m - 1000);
			t -= 1;
			sum += 1000;
			break;
		case 3:
			printf("레드불\n");
			printf("돈을 넣어주세요\n");
			scanf(" %d", &m);
			printf("거스름돈 %d과 음료를 챙겨주세요\n", m - 1000);
			t -= 1;
			sum += 1000;
			break;
		case 4:
			printf("몬스터\n");
			printf("돈을 넣어주세요\n");
			scanf(" %d", &m);
			printf("거스름돈 %d과 음료를 챙겨주세요\n", m - 1200);
			t -= 1;
			sum += 1200;
			break;
		case 5:
			printf("마운틴듀\n");
			printf("돈을 넣어주세요\n");
			scanf(" %d", &m);
			printf("거스름돈 %d과 음료를 챙겨주세요\n", m - 700);
			t -= 1;
			sum += 700;
			break;
		default:
			printf("메뉴 번호를 다시 입력해주세요\n");

			goto reload;
		}
		printf("번 금액: %d\n", sum);
		printf("재고: %d\n", t);
	} while (t>0);
}


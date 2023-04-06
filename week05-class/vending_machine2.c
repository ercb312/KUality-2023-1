#define _CRT_SECURE_NO_WARNINGS //gpa_cal6
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int main() {
	int n = 0; //메뉴 번호
	int t = 10; //total_quantity
	int m = 0; //input money
	int sum = 0; //profit(순수익?)
	int r = 0; //revenue(매출)
	int q[5] = {10, 10, 10, 10, 10};

reload:
	do {
		printf("-------------------메뉴--------------------\n");
		printf("0.종료 1.포카리(900\) 2.파워에이드(1000\) 3.레드불(1000\) 4.몬스터(1200\) 5.마운틴듀(700\)\n");
		printf("---------------------------------------------------------------------------\n");

		
		printf("메뉴 번호 입력: ");
		scanf(" %d", &n);


		switch (n) {
		case 1:
			printf("포카리\n");
			printf("돈을 넣어주세요\n");
			scanf(" %d", &m);
			printf("거스름돈 %d과 음료를 챙겨주세요\n", m - 900);
			q[0] -= 1;
			sum += 900;
			r += m;
			break;
		case 2:
			printf("파워에이드\n");
			printf("돈을 넣어주세요\n");
			scanf(" %d", &m);
			printf("거스름돈 %d과 음료를 챙겨주세요\n", m - 1000);
			q[1] -= 1;
			sum += 1000;
			r += m;
			break;
		case 3:
			printf("레드불\n");
			printf("돈을 넣어주세요\n");
			scanf(" %d", &m);
			printf("거스름돈 %d과 음료를 챙겨주세요\n", m - 1000);
			q[2] -= 1;
			sum += 1000;
			r += m;
			break;
		case 4:
			printf("몬스터\n");
			printf("돈을 넣어주세요\n");
			scanf(" %d", &m);
			printf("거스름돈 %d과 음료를 챙겨주세요\n", m - 1200);
			q[3] -= 1;
			sum += 1200;
			r += m;
			break;
		case 5:
			printf("마운틴듀\n");
			printf("돈을 넣어주세요\n");
			scanf(" %d", &m);
			printf("거스름돈 %d과 음료를 챙겨주세요\n", m - 700);
			q[4] -= 1;
			sum += 700;
			r += m;
			break;
		case 0:
			printf("시스템을 종료합니다");
			return 0;
		default:
			printf("메뉴 번호를 다시 입력해주세요\n");

			goto reload;
		}
		printf("번 금액: %d\n", sum);
		printf("투입된 금액: %d\n", r);
		printf("재고: %d %d %d %d %d\n", q[0], q[1], q[2], q[3], q[4]);
	} while (q[0] > 0 || q[1] > 0 || q[2] > 0 || q[3] > 0 || q[4] > 0);
}

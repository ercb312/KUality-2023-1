#define _CRT_SECURE_NO_WARNINGS //gpa_cal6
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int main() {

	int t = 10, q; //total_q, quantity

	reload:
do {
	printf("-------------------�޴�--------------------\n");
	printf("��ī��(900\) 2.�Ŀ����̵�(1000\) 3.�����(1000\) 4.����(1200\) 5.����ƾ��(700\)\n");
	printf("---------------------------------------------------------------------------\n");
	
	int n = 0;
	printf("�޴� ��ȣ �Է�: ");
	scanf(" %d", &n);

	int m = 0; //input money
	int sum = 0; //revenue

		switch (n) {
		case 1:
			printf("��ī��\n");
			printf("���� �־��ּ���\n");
			scanf(" %d", &m);
			printf("�Ž����� %d�� ���Ḧ ì���ּ���\n", m - 900);
			t -= 1;
			sum += 900;
			break;
		case 2:
			printf("�Ŀ����̵�\n");
			printf("���� �־��ּ���\n");
			scanf(" %d", &m);
			printf("�Ž����� %d�� ���Ḧ ì���ּ���\n", m - 1000);
			t -= 1;
			sum += 1000;
			break;
		case 3:
			printf("�����\n");
			printf("���� �־��ּ���\n");
			scanf(" %d", &m);
			printf("�Ž����� %d�� ���Ḧ ì���ּ���\n", m - 1000);
			t -= 1;
			sum += 1000;
			break;
		case 4:
			printf("����\n");
			printf("���� �־��ּ���\n");
			scanf(" %d", &m);
			printf("�Ž����� %d�� ���Ḧ ì���ּ���\n", m - 1200);
			t -= 1;
			sum += 1200;
			break;
		case 5:
			printf("����ƾ��\n");
			printf("���� �־��ּ���\n");
			scanf(" %d", &m);
			printf("�Ž����� %d�� ���Ḧ ì���ּ���\n", m - 700);
			t -= 1;
			sum += 700;
			break;
		default:
			printf("�޴� ��ȣ�� �ٽ� �Է����ּ���\n");

			goto reload;
		}
		printf("�� �ݾ�: %d\n", sum);
		printf("���: %d\n", t);
	} while (t>0);
}


#define _CRT_SECURE_NO_WARNINGS //gpa_cal6
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int main() {
	int n = 0; //�޴� ��ȣ
	int t = 10; //total_quantity
	int m = 0; //input money
	int sum = 0; //profit(������?)
	int r = 0; //revenue(����)
	int q[5] = {10, 10, 10, 10, 10};

reload:
	do {
		printf("-------------------�޴�--------------------\n");
		printf("0.���� 1.��ī��(900\) 2.�Ŀ����̵�(1000\) 3.�����(1000\) 4.����(1200\) 5.����ƾ��(700\)\n");
		printf("---------------------------------------------------------------------------\n");

		
		printf("�޴� ��ȣ �Է�: ");
		scanf(" %d", &n);


		switch (n) {
		case 1:
			printf("��ī��\n");
			printf("���� �־��ּ���\n");
			scanf(" %d", &m);
			printf("�Ž����� %d�� ���Ḧ ì���ּ���\n", m - 900);
			q[0] -= 1;
			sum += 900;
			r += m;
			break;
		case 2:
			printf("�Ŀ����̵�\n");
			printf("���� �־��ּ���\n");
			scanf(" %d", &m);
			printf("�Ž����� %d�� ���Ḧ ì���ּ���\n", m - 1000);
			q[1] -= 1;
			sum += 1000;
			r += m;
			break;
		case 3:
			printf("�����\n");
			printf("���� �־��ּ���\n");
			scanf(" %d", &m);
			printf("�Ž����� %d�� ���Ḧ ì���ּ���\n", m - 1000);
			q[2] -= 1;
			sum += 1000;
			r += m;
			break;
		case 4:
			printf("����\n");
			printf("���� �־��ּ���\n");
			scanf(" %d", &m);
			printf("�Ž����� %d�� ���Ḧ ì���ּ���\n", m - 1200);
			q[3] -= 1;
			sum += 1200;
			r += m;
			break;
		case 5:
			printf("����ƾ��\n");
			printf("���� �־��ּ���\n");
			scanf(" %d", &m);
			printf("�Ž����� %d�� ���Ḧ ì���ּ���\n", m - 700);
			q[4] -= 1;
			sum += 700;
			r += m;
			break;
		case 0:
			printf("�ý����� �����մϴ�");
			return 0;
		default:
			printf("�޴� ��ȣ�� �ٽ� �Է����ּ���\n");

			goto reload;
		}
		printf("�� �ݾ�: %d\n", sum);
		printf("���Ե� �ݾ�: %d\n", r);
		printf("���: %d %d %d %d %d\n", q[0], q[1], q[2], q[3], q[4]);
	} while (q[0] > 0 || q[1] > 0 || q[2] > 0 || q[3] > 0 || q[4] > 0);
}

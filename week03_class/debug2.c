#pragma warning(disable:4996) //debug2
#pragma warning(disable:6031)
#include <stdio.h>
int main() {
	int a, b, c;
	char n;

	printf("정수 3개를 입력하시오: ");
	scanf(" %d %d %d", &a, &b, &c);
	printf("Input operator: ");
	scanf(" %c", &n);

	switch (n) {
	case '*':
		printf("a * b * c = %d\m", a * b * c);
		break;
	case '+':
		printf("a + b + c = %d\m", a + b + c);
		break;
	case '-':
		printf("a - b - c = %d\m", a - b - c);
		break;
	case '/':
		printf("a / b / c = %d\m", a / b / c);
		break;
	}

	if (n == '*') {
		printf("%d * %d * %d = %d\m", a, b, c, a * b * c);
	}

	else if (n == '+') {
		printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
	}
	else if (n == '-') {
		printf("%d - %d - %d = %d\n", a, b, c, a - b - c);
	}
	else if (n == '/') {
		printf("%d / %d / %d = %d\n", a, b, c, a / b / c);
	}
	else {
		printf("Invalid Operator");
	}
}

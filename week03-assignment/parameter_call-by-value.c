#include <stdio.h> // 매개 변수가 2개 이상인 함수 + call-by-value
main()
{
	int x, y;
	x = 1, y = 2;
	void swap(int x, int y);
	printf("x의 값은 %d, y의 값은 %d\n", x, y);
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("x의 값은 %d, y의 값은 %d\n", x, y);
}

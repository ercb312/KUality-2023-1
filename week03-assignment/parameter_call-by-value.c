#include <stdio.h> // �Ű� ������ 2�� �̻��� �Լ� + call-by-value
main()
{
	int x, y;
	x = 1, y = 2;
	void swap(int x, int y);
	printf("x�� ���� %d, y�� ���� %d\n", x, y);
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("x�� ���� %d, y�� ���� %d\n", x, y);
}

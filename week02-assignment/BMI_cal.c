#define _CRT_SECURE_NO_WARNINGS //BMI_cal
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	//afasf
	double kg;
	double m;
	// sdfdf
	char cwd[100000];
	getcwd(cwd, sizeof(cwd));

	printf("%s", cwd);
	printf("������(kg)�� Ű(m)�� �Է��Ͻÿ�: ");
	scanf(" %lf %lf", &kg, &m);
	printf("ye ����� BMI�� %.1lf�Դϴ�.", kg / (m * m));

}

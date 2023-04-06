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
	printf("몸무게(kg)와 키(m)를 입력하시오: ");
	scanf(" %lf %lf", &kg, &m);
	printf("ye 당신의 BMI는 %.1lf입니다.", kg / (m * m));

}

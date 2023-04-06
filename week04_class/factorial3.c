#define _CRT_SECURE_NO_WARNINGS //factorial3
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int factorial(int n) {
	int result = 1;
	while (n > 0) {
		result = result * n;
		n = n - 1;
	}
	return result;
}

int main() {
	int my_input;
	scanf(" %d", &my_input);
	printf("%d", factorial(my_input));
}

#include <stdio.h> //main_func

int main(int argc, char* argv[])
{
	printf("argv = %d\n", argc);
	for (int ndx = 0; ndx != argc; ++ndx)
		printf("argv[%d] --> %s\n", ndx, argv[ndx]);
	printf("argv[argc] = %p\n", (void*)argv[argc]);
}

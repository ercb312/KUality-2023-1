#include <stdio.h> //debug1

int main() {
	int n = 0;

	for (int i = 0; i < 100; i++) {
		n += i;
	}
	printf("%d", n);
}

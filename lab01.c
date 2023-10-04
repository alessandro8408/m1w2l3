#include <stdio.h>

int main() {
	int a, b;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	printf("The average between %d and %d is %.3f\n", a, b, (a+b)/(float)2);

	return 0;
}

#include <stdio.h>

int main() {
	float a, b;
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("%.3f * %.3f = %.3f", a, b, a*b);

	return 0;
}

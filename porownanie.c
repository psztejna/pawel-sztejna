#include <stdio.h>
#include <math.h>

int main() 
{
int a, b;
	printf("podaj a, b\n");
	scanf("%d %d", &a, &b);

	if (a == b) {
		printf("%d = %d\n", a, b);
	}
	if (a > b) {
		printf("%d > %d\n", a, b);
	}
	if (a < b) {
		printf("%d < %d\n", a, b);
	}
}


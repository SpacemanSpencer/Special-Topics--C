#include <stdio.h>
#include <math.h>

int main()
{
	int a, b , c, d;

	printf("Enter a value for a: \n");
	scanf("%d", &a);

	printf("Enter a value for b: \n");
	scanf("%d", &b);

	printf("Enter a value for c: \n");
	scanf("%d", &c);

	d = a + b + c;
	printf("the sum is: %d \n", d);
}
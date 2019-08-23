#include <stdio.h>
#include <math.h>

int main()
{
	double a, b , c, d;

	printf("Enter a value for a: \n");
	scanf("%lf", &a);

	printf("Enter a value for b: \n");
	scanf("%lf", &b);

	printf("Enter a value for c: \n");
	scanf("%lf", &c);

	d = a + b + c;
	printf("the sum is: %f \n", d);
}
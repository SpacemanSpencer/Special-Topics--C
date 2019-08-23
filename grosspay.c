#include <stdio.h>
#include <math.h>

int main()
{
	float hours, payRate;
	double gross;
	char user[10];

	printf("Enter username: \n");
	scanf("%s", user);

	printf("Enter the number of hours worked: \n");
	scanf("%f", &hours);

	printf("Enter the pay rate: \n");
	scanf("%f", &payRate);

	gross = hours * payRate;
	printf("%s has earned: %f \n", user, gross);
}
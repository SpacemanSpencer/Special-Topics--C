/*
	Author : Spencer Stair
	Development Date : 1/25 - 2/3
	Goals : “C” Option (best grade is a 75):
			Prompt the user for the two sides of a rectangle (length and width).  Compute the area of the rectangle as the product of the length and width using variables of type “float” in “C”.  Print the area of the rectangle and its perimeter.  The perimeter of a rectangle is the sum of twice the length plus twice the width.  You may assume the user enters both the length and width using the same units.  For full credit, your program must exhibit appropriate prompts for user input and appropriate labels for the output (area and perimeter).

			Test your program using a length of 5.32733 inches and width 6.8875899 inches.  Also test your program with a length of 10.0 meters and width of 5.347863 meters.

			“B” Option (best grade is an 85):
			After completing the “C” Option, compute and print the area of a triangle using “double” precision arithmetic.  For full credit the “C” option results should be followed by the “B” option results in you output.  Test your program using two triangles:  (height 345.897856 meters and width of 623.13378 meters) and (height 75436.3521 feet and width 2314.1 feet).

			“A” Option (best grade is 95):
			Compute the area of a circle using type float.  The area of a circle may be computed using the formula ∏ * radius2.  Print the area of the circle properly labeled following the “C/B” option results.  Test your program using radius of 897.789 and 949.1 feet respectively.

			“A+” (grade above 95):
			To make a grade above 95, the results of all calculations must printed with exactly three decimal digits of accuracy.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float length, width, radius, area, areaC0, areaC1, perimeter;
	double base, height, areaT;
	double pi = 3.1417;

	printf("C option\n");
	for(int Rectangle = 0; Rectangle < 2; Rectangle++)
	{
	scanf("%f", &length);	
	printf("Value of the Rectangle's Length: %f \n", length);
	
	scanf("%f", &width);
	printf("Value of the Rectangle's Width: %f \n", width);

	area = length * width;
	printf("The value for the Rectangle's Area is: %.3f \n", area);
	perimeter = 2 * length + 2 * width;
	printf("The value for the Rectangle's Perimeter is: %.3f \n\n", perimeter);
	}

	printf("\nB option\n");
	for(int Triangle = 0; Triangle < 2; Triangle++)
	{
	scanf("%lf", &base);
	printf("Value of the Triangle's Base: %lf \n", base);
	
	scanf("%lf", &height);
	printf("Value of the Triangle's Height: %lf \n", height);
	
	areaT = (height * base) / 2;
	printf("The value for the Triangle's Area is: %.3f \n\n", areaT);
	}

	printf("\nA option\n");
	for(int Circle = 0; Circle < 2; Circle++)
	{
	scanf("%f", &radius);	
	printf("Value of the Circle's Radius: %f \n", radius);

	//area of Circle with defined pi
	areaC0 = pi * radius * radius;
	printf("Using defined pi, The value for the Circle's Area is: %.3f \n", areaC0);
	//area of Circle with pi from math library
	areaC1 = M_PI * radius * radius;
	printf("Using math library pi, The value for the Circle's Area is: %.3f \n\n", areaC1);
	}
}
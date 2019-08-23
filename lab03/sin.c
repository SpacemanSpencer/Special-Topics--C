//program to calculate sin given an angle
/*Compute the sine of “angle” using as many terms in the series 
as required till two successive approximations differ by no more than 0.0000001.  
Hint 1: see the example for computing square roots.  
		The sine of a number may be found using the following series.
		Sin( x ) = x – x3/3! + x5/5! – x7/7! + ●●●.  
Hint 2: angles should be measured in radians: 2π radians =360 degrees.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sinNew(float angle){

	float sum, temp;

    angle = angle * M_PI / 180;
    temp = angle;
    sum = angle;

    for(int i = 1; i <= 4; i++){
    	temp = (temp * (-1) * angle * angle) / (2 * i * (2 * i + 1));
    	sum = sum + temp;
    }

	return sum;

}
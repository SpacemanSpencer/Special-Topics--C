//subprogram to calcualte gross
//Calculate gross pay.  Pay regular time for <= 40 hours, time and a half for hours over 40, and double time for time during company recognized holidays.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerFile.h"

	float CalculateGross(float pRate, float hours){
		float gross = 0;

		if(hours <= 40){
			gross = pRate * hours;
		}
			else if(hours > 40){
				gross = 40 * pRate + (hours - 40) * 1.5 * pRate;
			}
		return gross;
	}
/*
Hint:
	double calculateGross( double hrs, double rate)
{
	if(hrs <= 40)
		return hrs * rate;
	else
		return 40 * rate + (hrs – 40) * 1.5 * rate;
}

// call in main
grossPay = calculateGross( hrsWkd, payRate);
*/

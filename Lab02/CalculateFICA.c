//subprogram to calculate FICA
//Calculate FICA using current government regulations.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerFile.h"

	float CalculateFICA(float ytd, float FICAlimit, float gross, float tRate){
		float FICA = 0;

		if(ytd >= FICAlimit){
			FICA = 0; //tax exempt || pay no tax
		}
			else if(ytd + gross <= FICAlimit){
				FICA = gross * tRate; 
			}
				else{
					FICA = (FICAlimit - ytd) * tRate;
				}
		return FICA;
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
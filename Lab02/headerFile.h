#ifndef HEADERFILE02_H_   /* Include guard */
#define HEADERFILE02_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//subprogram to create a new page
/*Finish Last Page.	1)  Write page summaries.	2)  Write page number.	3)  Add page totals to report totals
Start Next Page.	4)  PK++	5)  Write page headings.	6)  LK = 0.
     Set page totals to zero.*/
void NewPage(int LK, int MaxLines, float Pgross, float Pfica, float Pnet, int *PK, int ID);

//subprogram to calcualte gross
//Calculate gross pay.  Pay regular time for <= 40 hours, time and a half for hours over 40, and double time for time during company recognized holidays.
float CalculateGross(float pRate, float hours);

//subprogram to calculate FICA
//Calculate FICA using current government regulations.
float CalculateFICA(float ytd, float FICAlimit, float gross, float tRate);

#endif

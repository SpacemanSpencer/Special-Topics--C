//subprogram to create a new page
/*Finish Last Page.	1)  Write page summaries.	2)  Write page number.	3)  Add page totals to report totals
Start Next Page.	4)  PK++	5)  Write page headings.	6)  LK = 0.
     Set page totals to zero.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerFile.h"

	void NewPage(int LK, int MaxLines, float Pgross, float Pfica, float Pnet, int *PK, int ID){
			*PK = 0;
			FILE *outFile;
			char fileOutName[21] = { 'o', 'u', 't', 'p', 'u', 't', '0', '2', '.', 't', 'x', 't'};
			outFile = fopen(fileOutName, "w");


		//having the cover page in the NewPage.c is giving me errors -- missing employees
		//Cover Page
		if(*PK == 0){
			fprintf(outFile, "\t\t\t\t\tACME Sports Inc.\n\t\t\t\"We are the best, you are the best!\"\f\n\n");
			*PK += 1;
			LK = MaxLines;
		}


		if( LK == MaxLines ){

			if(Pgross != 0){
				fprintf(outFile, "\nPage Totals:\t\t\t\t\t\t%8.2lf\t%8.2lf\t%8.2lf\n", Pgross, Pfica, Pnet);
				fprintf(outFile, "\t\t\t\t\t\t\t\t\t\t\t\t  Page %d\f\n", *PK);
				*PK += 1;
				Pgross = 0;
				Pfica = 0;
				Pnet = 0;
			}
			LK = 0;
			//Print heading
			if(LK == 0){ 
				if(ID != -1){
				fprintf(outFile, "\t\t\t\t\t\tACME\n\nID\tGiven\t\tSurname\tDept\t   YTD\t  Gross\t   FICA\t   Net\n");
				}
			}
			LK++;
		}
	}

/*
Hint:
void calculateGross( double hrs, double rate, *gross)
{
	*gross = (hrs <= 40) ? hrs * rate : 40 * rate + (hrs – 40) * 1.5 * rate;
}

// call in main
calculateGross( hrsWkd, payRate, &grossPay);
*/
/*
Author : Spencer Stair
Date : 2/18 - 2/21
“C” Option (best grade is 75):
First complete the “D” option.  Now repeatedly prompt the user in a “do-while, while, or for” construct for an employee’s YTD and gross until the user indicates all data has been processed.  Calculate the employees FICA tax.  Print a single page report with appropriate headings and one line per employee.  The report detail line should include the YTD, gross, and FICA tax.  The tax rate and FICA limit should be entered by the user from their terminal or hard coded in the program one time only.  You may use any Linux/Unix distribution of your choice to complete the “C” and “B” options of this lab.  Use the data on the sample “B” option report  (no names) for your data (YTD and gross).
“B” Option (best grade is 85):
Do the “D” option first followed by the “B” option.  You need not do the “C” option.  In addition to the “C” option requirements, prompt the user for the employee’s name and employee number.  Include this information on each detail line in the report.  Each line in the report should be numbered consecutively starting with one in increments of one.  The Line number should be left justified using four print positions.  The employee number should be right justified using six print positions.  The FICA tax should be printed with a leading dollar sign (“$”) and two decimal digits (nearest cent) to the right of the radix point.  Does “C” round or truncated your tax calculation?  Hint: %8d, %-8d.  All decimal points in the same column should be in a vertical line.  Use the information on the sample “B” option report for your data.
Exhibit the total gross for the pay period as well as the total FICA tax as a footer at the end of the report in the appropriate columns.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

	double gross, FICA, ytd, gTotal, ftTotal, tRate, limit;
	int empNum, lineNum = 1;
	char Given[16]; 
	char Surname[16];

	FILE *inFile;
	char fileInName[21] = { 'i', 'n', 'p', 'u', 't', '0', '1', '.', 't', 'x', 't'};
	FILE *outFile;
	char fileOutName[21] = { 'o', 'u', 't', 'p', 'u', 't', '0', '1', '.', 't', 'x', 't'};

	inFile = fopen(fileInName, "r");
	if(inFile == NULL){
		printf("Input file does not exist! Terminating!\n");
		exit(1);
	}

	outFile = fopen(fileOutName, "w");
	if(outFile == NULL){
		printf("Could not create report! Terminating!\n");
		exit(1);
	}

	//set totals to zero
	gTotal = 0;
	ftTotal = 0; 

	fscanf(inFile, "%lf", &tRate);	//stores tax rate from file
	fscanf(inFile, "%lf", &limit);	//stores FICA Limit from file

	//print header to output file
	fprintf(outFile, "\t\t\tACME\t\t\tFeb. 20, 2018\n\n"); 
	fprintf(outFile, "Line\tEmployee\tGiven\tSurname\t   YTD\t\t  Gross\t FICA Tax\n\n");

	for(int i = 5; i > 0; i--){
		fscanf(inFile, "%d", &empNum);	//stores employee number from file
		fscanf(inFile, "%s", Given);	//stores employee first name from file
		fscanf(inFile, "%s", Surname);	//stores employee last name from file
		fscanf(inFile, "%lf", &ytd);	//stores ytd from file
		fscanf(inFile, "%lf", &gross);	//stores gross from file

			if(ytd >= limit){
				FICA = 0; //tax exempt || pay no tax
			}
				else if(ytd + gross <= limit){
					FICA = gross * tRate; //tax exempt || pay no tax
				}
					else{
						FICA = (limit - ytd) * tRate;
					}

		fprintf(outFile, "%-4d\t%6d\t%s\t%s\t%9.2lf\t%8.2lf\t$%8.2lf\n", lineNum, empNum, Given, Surname, ytd, gross, FICA);

		lineNum++;

		gTotal += gross;
		ftTotal += FICA;
	}
	fprintf(outFile, "\n\t\t\t\tTotals\t\t%8.2lf\t$%8.2lf", gTotal, ftTotal);

	fclose(inFile);
	fclose(outFile);
}
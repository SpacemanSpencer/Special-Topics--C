/*
“C” Option (best grade is 75):
Implement each of the required functions in a “static” library.  Test them by prompting the user at run time for the following data.
    A) Use 17.583 centimeters for the radius of the sphere.
    B) Use a radius of 13.35 feet and height of 3.71 feet for the dimensions of the cylinder.
    C) Enter the following floating point (not double precision) numbers in the order shown to test your addition function: 0.3476789, 100400.8, 0.0000099, 1.343567, 78.34567, 1678.567, 997999.6, 0.0000009.
    D) Find the sine of 45, 36, and 0.345 degrees.


“B” Option (best grade is a 85):
Implement the “C” Option a second time but you must use a “shared library” for the engineering functions.  Use the simplest form of a shared library which requires all referenced modules be placed in memory at load time.  The executable and library must be created using the “make” facility.  Submit the “C” option materials first.  The “C” option output should be followed by a cover page announcing the “B” option results.  A copy of your “B” option make file should appear first followed by a copy of the “B” option execution results.

“A” Option (best grade is 100);
Implement the “B” option.  You must use a dynamic link shared library.  Again, the executable and library must be created using a “make” file.  The “B” option results should be followed by a cover page announcing the “A” option results.  For the “A” option submit a copy of your “A” option make file first, followed by a source listing for the main program, then the results of the execution.
*/

#include <stdio.h>
#include <stdlib.h>

//program to calcualte Volume and SurfaceArea of sphere
void sphere(float radius, float *surfaceArea, float *volume);

//program to calcualte volume of cylinder
float volCylinder(float radius, float *height);

//program to calculate sumFloats
float sumFloats(float x[], int numFloats);

//program to calculate sin given an angle
double sinNew(float angle);


int main(){

	float sRadius, cylRadius, cylHeight, sinAngle, SsurfArea, Svol, CylVol, Sresult, fArray [9], Sum = 0; 
	int counter = sizeof(fArray) / sizeof(fArray[0]);
	FILE *outFile;
	char fileOutName[21] = { 'o', 'u', 't', 'p', 'u', 't', '0', '3', '.', 't', 'x', 't'};

	outFile = fopen(fileOutName, "w");
	if(outFile == NULL){
		printf("Could not create report! Terminating!\n");
		exit(1);
	}

	//calc sphere SurfaceArea & Volume
	printf("enter the radius of the sphere: ");
	scanf("%f", &sRadius);
	sphere(sRadius, &SsurfArea, &Svol);
	printf("SurfaceArea of the sphere is: %lf\n", SsurfArea);
	fprintf(outFile,"SurfaceArea of the sphere is: %lf\n", SsurfArea);
	printf("Volume of the sphere is: %lf\n", Svol);
	fprintf(outFile,"Volume of the sphere is: %lf\n", Svol);

	//calc cylinder volume
	printf("enter the radius of the cylinder: ");
	scanf("%f", &cylRadius);
	printf("enter the height of the cylinder: ");
	scanf("%f", &cylHeight);
	CylVol = volCylinder(cylRadius, &cylHeight);
	printf("Volume of the cylinder is: %lf\n", CylVol);
	fprintf(outFile,"Volume of the cylinder is: %lf\n", CylVol);

	//loop 8 times
	for(int i = 1; i <= 8; i++){
		printf("enter the floating points to be sorted: ");
		scanf("%f", &fArray[i]);
	}

	printf("Unsorted data is:\n");
	fprintf(outFile,"Unsorted data is:\n");
	for(int i = 1; i <= 8; i++){
		printf("%lf\n", fArray[i]);
		fprintf(outFile,"%lf\n", fArray[i]);
	}

	Sum = sumFloats(&fArray[0], counter);

	printf("Sorted data is:\n");
	fprintf(outFile,"Sorted data is:\n");
	for(int i = 1; i <= 8; i++){
		printf("%lf\n", fArray[i]);
		fprintf(outFile,"%lf\n", fArray[i]);
	}

	printf("Sum of the sorted floats: %lf\n", Sum);
	fprintf(outFile,"Sum of the sorted floats: %lf\n", Sum);

	//loop 3 times
	for(int i = 0; i < 3; i++){
		printf("enter the angle you would like to find the sin of: ");
		scanf("%f", &sinAngle);
		Sresult = sinNew(sinAngle);
		printf("Sin(%f) is: %4.7lf\n", sinAngle, Sresult);
		fprintf(outFile,"Sin(%f) is: %4.7lf\n", sinAngle, Sresult);

	}

}
/*
	Test Program random number generation utility
	in file randTest.c
*/

#include "randapi.h"
#include <stdio.h>
// pow(2,16) is only 32,767 – 5 digits on 16 bit machine
#define NUMITERATIONS 1234567L

int main( )
{	long    k, longSum;  //32 bit integers on 16 bit PC
	double	floatSum;
	
	/* initialize the random number wrapper class */
	seedRandGenerator( );
	
	/* Test random integer for range 0-20 */
	longSum = 0L;
	for( k = 0; k < NUMITERATIONS; k++)
		longSum += getRandInteger( 20 );
	printf("average random integer = %d\n",
            (int)(longSum/NUMITERATIONS) );
	
	
	/* Test random float point number range 0.0 <= ran num < 1.0 */
	floatSum = 0.0;
	for( k = 0; k < NUMITERATIONS; k++)
		floatSum += getRandFloat( );
	printf("average random float = %f\n", 
             (floatSum / (float)NUMITERATIONS) );


	/* Test random exponential with mean of 10.0  */


	floatSum = 0.0;
	for( k = 0; k < NUMITERATIONS; k++){
		floatSum += (getRandExponential( ) * 10.0);
	}
	printf("average random exponential = %f\n", 
             (floatSum / (float)NUMITERATIONS) );
	
	return;
}
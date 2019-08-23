//program to calculate sumFloats
/*Return the most accurate sum of the elements in the array, 
i.e., compute the sum after sorting the array into ascending order 
using a sort by selection.  Prompt the user at run time for the 
floating point numbers to be summed in the main program placing them 
in an array prior to calling this function.  Explain why sorting did 
or did not improve the accuracy in this specific example and 
implications for the general case (random data).*/

#include <stdio.h>
#include <stdlib.h>

void swap(float *temp1, float *temp2);

float sumFloats(float x[], int numFloats){
	float summed = 0.0;
	int i, j, k, min;

	for(j = 0; j < numFloats - 1; j++){
		min = j;
		for(k = j + 1; k < numFloats; k++){
			if(x[k] < x[min]){
				min = k;
			}
		}

		swap(&x[min], &x[j]);
	}

	for(i = 1; i <= numFloats; i++){
		summed += x[i];
	}

	return summed;
}

void swap(float *temp1, float *temp2)
{
    float temp = *temp1;
    *temp1 = *temp2;
    *temp2 = temp;
}
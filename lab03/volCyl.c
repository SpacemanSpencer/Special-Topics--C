//program to calcualte volume of cylinder

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volCylinder(float radius, float *height){

	return M_PI * radius * radius * *height;

}
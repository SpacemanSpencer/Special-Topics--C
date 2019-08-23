//program to calcualte Volume and SurfaceArea of sphere

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sphere(float radius, float *surfaceArea, float *volume){

	*surfaceArea = 4 * M_PI * radius * radius;
	*volume = (4.0 / 3.0) * M_PI * radius * radius * radius;

}
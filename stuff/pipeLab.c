#include "randapi.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wait.h>

typedef int bool;
#define true 1
#define false 0
#define MaxLen 80
#define PipeStdIn   0       //stdin for Unix is  0, default is keyboard.
#define PipeStdOut  1     //stdout  for Unix is 1, default is crt.

int main ( ) // Bridge
{
	const char *message = {"Hello!\n"};
	int ret, myPipes[2];       // hold file pointers, Pipes[0] for input, [1] for output.
	char buff[MaxLen + 1];
	bool lifeSup = 0, nav = 0;
	
	ret = pipe( myPipes );// create pipe

	int rand1 = getRandInteger(7);
	float rand2 = getRandExponential(5);
	float rand3 = getRandExponential(4);	// seed random number generator

	if (fork( ) == 0)
	{  // create navigation, child 1
		nav = true;
		printf("Navigational adjustments have been made\n");
		sleep(rand1);
		printf("Environment adjustments have been made\n");
		sleep(rand3);
	}
		if( fork( ) == 0)
		{  // create life support, child 2
			lifeSup = true;			
			printf("Adjusted breating levels\n");
			sleep(rand2);
			printf("Environment adjustments have been made\n");
			sleep(rand3);
		}
			while(lifeSup == true) 
			{
				write( myPipes[PipeStdOut], message, strlen(message) + 1 );	
			} // end while - life support loop
		else {
			// child1 navigation
			while( nav == true ) 
			{
				write( myPipes[PipeStdOut], message, strlen(message) + 1 );
			}  // end while – navigation loop
		// end if
			// code common to life support and navigation
	}	
	else {
		// bridge
		while (nav == true && lifeSup == true) 
		{
			read( myPipes[PipeStdIn], message, strlen(message) + 1 );
		}  //end while
	}  // end bridge specific
			// code common to bridge and life support
	return 0;
	close( myPipes[PipeStdIn] );
	close( myPipes[PipeStdOut] );
} // end program
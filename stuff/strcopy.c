//string copy

#include <stdio.h>
#include <string.h>

void copy_string(char *target, char *source);
 
int main()
{
   char source[1000], destination[1000];
 
   printf("Input a string into the source\n");
   strcpy(source,  "Hello World");
 
   copy_string(&destination[0], &source[0]);
 
   printf("Source string: %s\n", source);
   printf("Destination string: %s\n", destination);
}

void copy_string(char *destination, char *source) {
   while (*source) {
      *destination = *source;
      source++;
      destination++;
   }
   //*destination = '\0';
}
//string cat

#include <stdio.h>
#include <string.h>

void cat_string(char *dest, char *src);

int main () {
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   //strcat(dest, src);
   cat_string(&dest[19], &src[0]);

   printf("Final destination string : |%s|\n", dest);
   
}

void cat_string(char *dest, char *src) {
    while(*src){
    	*dest = *src;
    	src++;
    	dest++;
    }  
}
//string compare

#include <stdio.h>
#include <string.h>

int main () {
   char str1[50] = {"h", "e", "l", "o"}, str2[50] = {"h", "e", "l", "l", "o"};

   if(strcmp(str1, str2) != 0){
   		printf("Strings are not the same\n");
   }
   else{
   	   printf("Strings are same\n");
   }
   
}
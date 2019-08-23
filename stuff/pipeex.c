#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define MaxLen 80
#define PipeStdIn   0       //stdin for Unix is  0, default is keyboard.
#define PipeStdOut  1     //stdout  for Unix is 1, default is crt.

int main(  ) {
  const char *message = {"Sample message to send through pipe!\n"};
  int ret, myPipes[2];       // hold file pointers, Pipes[0] for input, [1] for output.
  char buff[MaxLen + 1];
  
  ret = pipe( myPipes );  // Create the pipes (file descriptors): int  pipe(int [2]).    
                                         // ret == 0 indicates successful creation of pipes, -1 error.

  //Do not have to open and close anonymous pipes (files) – they belong to the kernel.
  if( ret == 0 ){  //Pipe created successfully, send message including terminating null.
                          //Pipe creation failure returns -1 with errno set appropriately.
      write( myPipes[PipeStdOut], message, strlen(message) + 1 ); //include null char

      /* Read a maximum of MaxLen characters into buff
         setting ret to length of message read.
      */
      ret = read( myPipes[PipeStdIn], buff, MaxLen); //ret is number chars in buff
    
      printf("%s\n", buff);
  }

  close( myPipes[PipeStdIn] );  //Resources associated with pipe should be
  close( myPipes[PipeStdOut] ); //reclaimed automatically on program termination.

  return 0;
}
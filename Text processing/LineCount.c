/* "LineCount.c" - Count lines from input
*  using getchar & putchar from stdio.h library.
*
*  Author:  Adrian Chiriac, 3 January 2016
*
*  Version: 1.0 - Basic functionality 
*           
*/

#include <stdio.h>	// Standard C library 

////////////////////////////////////////////////////
// main() - The main body of the program
////////////////////////////////////////////////////
int main(){

   int c, nl = 0;

   while(( c = getchar()) != EOF)   // Receive input until EOF
      if (c == '\n') // If new line increase counter
         ++nl;
         
   printf("%d\n", nl);  // Print number of lines 

   return 0; // End program gracefully
}

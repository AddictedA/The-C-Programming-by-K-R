/* "CountSpecialChar.c" - Counts blanks, tabs, and newlines from input
*  using getchar & putchar from stdio.h library.
*
*  Author:  Adrian Chiriac, 4 January 2016
*
*  Version: 1.0 - Basic functionality 
*           
*/

#include <stdio.h>	// Standard C library 

////////////////////////////////////////////////////
// main() - The main body of the program
////////////////////////////////////////////////////
int main(){

   int c, blanks = 0, tabs = 0, nl = 0;

   while(( c = getchar()) != EOF){   // Receive input until EOF
      if (c == '\n') // If new line increase counter
         ++nl;
      if (c == '\t') // If tab increase counter
         ++tabs;
      if (c == ' ') // If blanks increase counter
         ++blanks;
   }
         
   printf("There are %d blanks, %d tabs, and %d new lines", blanks, tabs, nl);  // Print number of lines 

   return 0; // End program gracefully
}

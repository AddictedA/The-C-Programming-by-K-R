/* "Copy file.c" - Count characters from input
*  using getchar & putchar from stdio.h library.
*  Includes the newline character in count.
*
*  Author:  Adrian Chiriac, 2 January 2016
*
*  Version: 1.0 - Basic functionality 
*/

#include <stdio.h>	// Standard C library 

////////////////////////////////////////////////////
// main() - The main body of the program
////////////////////////////////////////////////////
int main(){

   long nc = 0;   // Initialize character counter

   while ( getchar() != EOF){ // Receive input until EOF (CTRL + Z) received
      ++nc;
   }
   
   printf("%ld\n", nc); // Print number of characters (/n is included in count)
   
   return 0; // End program gracefully
}

/* "Copy file.c" - Copy input to output one character at a time
*  using getchar & putchar from stdio.h library.
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

   int c;

   c = getchar();

   while ( c != EOF){
      putchar(c);
      c = getchar();   
   }
   
   return 0; // End program gracefully
}

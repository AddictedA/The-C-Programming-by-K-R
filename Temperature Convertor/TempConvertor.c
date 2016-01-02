/* "TempConvertor.c" - Converts Fahrenheit temperature into Celsius
*  for Fahrenheit temperatures between 0 and 300 in increments of 20.
*
*  Author:  Adrian Chiriac, 31 December 2015
*/

#include <stdio.h>	// Standard library for c

#define LOWER 0
#define UPPER 300
#define STEP 20
////////////////////////////////////////////////////
// main() - The main body of the program
////////////////////////////////////////////////////
int main()
{	
//	int lower = 0, upper = 300, step = 20;	// Loop through variables
//	int fahr = lower, celsius;	// Final value variables
//	
//	while (fahr <= upper)	// Loop while fahr smaller then the upper limit
//	{
//		celsius = 5 * (fahr - 32) / 9;	// Math formula for converting F to C
//		printf("%d\t%d\n", fahr, celsius);	// Output value in Fahrenheit and Celsius
//		fahr = fahr + step;	// increment with step size 
//	}	// End while
	
   int celsius;
	
   for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)	// Iterate fahr from LOWER to UPPER limit
   {
      celsius = 5 * (fahr - 32) / 9;	// Math formula for converting F to C
      printf("%d\t%d\n", fahr, celsius);	// Output value in Fahrenheit and Celsius
   }	// End for
	
   return 0; // End program gracefully
}

/* "TempConvertor.c" - Converts Fahrenheit temperature into Celsius
*  for Fahrenheit temperatures between 0 and 300 in increments of 20.
*
*  Author:  Adrian Chiriac, 31 December 2015
*/

#include <stdio.h>	// Standard library for c

// Define constants
#define LOWER 0
#define UPPER 300
#define STEP 20

////////////////////////////////////////////////////
// main() - The main body of the program
////////////////////////////////////////////////////
int main()
{	
	float fahr = LOWER, celsius;	// Final value variables
	
	while (fahr <= UPPER){	// Loop while fahr smaller then the upper limit

		celsius = (5.0/9.0) * (fahr - 32.0);	// Math formula for converting F to C
		printf("%3.0f\t%6.1f\n", fahr, celsius);	// Output value in Fahrenheit and Celsius
		fahr = fahr + STEP;	// increment with step size 
	}	// End while	

	return 0; // End program gracefully
}

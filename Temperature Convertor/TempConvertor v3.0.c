/* "TempConvertor.c" - Creates temperature conversion charts
*  For Fahrenheit temperatures between 0 and 300 in increments of 20.
*  For Celsius temperatures between 0 and 100 in increments of 5.
*
*  Exercises 1-3 & 1-4 from K&R book.
*
*  Author:  Adrian Chiriac, 1 January 2016
*/

#include <stdio.h>	// Standard library for c

// Define constants
#define LOWER 0
#define UPPERF 300
#define UPPERC 100
#define STEPF 20
#define STEPC 5

////////////////////////////////////////////////////
// main() - The main body of the program
////////////////////////////////////////////////////
int main()
{	
	float fahr = LOWER, celsius;	// Final value variables
	
	printf("Conversion chart for F to C temperatures\n\n");	// Headet for table
		
	while (fahr <= UPPERF){	// Loop while fahr smaller then the upper limit
	
		celsius = (5.0 / 9.0) * (fahr - 32.0);	// Math formula for converting F to C
		printf("%3.0f\t%6.1f\n", fahr, celsius);	// Output value in Fahrenheit and Celsius
		fahr = fahr + STEPF;	// increment with step size 
	}	// End while	
	
	printf("\n\n");
	
	printf("Conversion chart for C to F temperatures\n\n");	// Headet for table
	
	celsius = LOWER;
	
	while (celsius <= UPPERC){	// Loop while fahr smaller then the upper limit
	
		fahr = 9.0 / 5.0 * celsius + 32.0;	// Math formula for converting C to F
		printf("%3.0f\t%6.1f\n", celsius,  fahr);	// Output value in Celsius and Fahrenheit  
		celsius = celsius + STEPC;	// increment with step size 
	}	// End while	
	
	printf("\n\n");

	return 0; // End program gracefully
}

/* "TempConvertor.c" - Creates temperature conversion charts
*  For Fahrenheit temperatures between 0 and 300 in increments of 20.
*  For Celsius temperatures between 0 and 100 in increments of 5.
*
*  Chapter 1.3 from K&R
*  Switching "while" statements to "for" statements
*
*  Author:  Adrian Chiriac, 1 January 2016
*/

#include <stdio.h>	// Standard library for c

// Define constants
#define LOWER 0      // Lower limit for both F and C
#define UPPERF 300   // Upper F limit
#define UPPERC 100   // Upper C limit
#define STEPF 20     // Step size for F
#define STEPC 5      // Step size for C

////////////////////////////////////////////////////
// main() - The main body of the program
////////////////////////////////////////////////////
int main()
{	
   float fahr, celsius;	// Variables
	
   printf("Conversion chart for F to C temperatures\n\n");	// Header for table
		
   for (fahr = LOWER; fahr <= UPPERF; fahr += STEPF){
      printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));	// Output value in Fahrenheit and Celsius
   }	// End for	
	
   printf("\n\n");
	
   printf("Conversion chart for C to F temperatures\n\n");	// Header for table
	
   for (celsius = LOWER; celsius <= UPPERC; celsius += STEPC){
      printf("%3.0f\t%6.1f\n", celsius, (9.0 / 5.0 * celsius + 32.0));	// Output value in Celsius and Fahrenheit
   }	// End for		
	
   printf("\n\n");
   
   printf("Conversion chart for F to C temperatures\n\n");	// Header for table
		
   for (fahr = UPPERF; fahr >= LOWER; fahr -= STEPF){
      printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));	// Output value in Fahrenheit and Celsius
   }	// End for	
	
   printf("\n\n");
	
   printf("Conversion chart for C to F temperatures\n\n");	// Header for table
	
   for (celsius = UPPERC; celsius >= LOWER; celsius -= STEPC){
      printf("%3.0f\t%6.1f\n", celsius, (9.0 / 5.0 * celsius + 32.0));	// Output value in Celsius and Fahrenheit
   }	// End for		
	
   printf("\n\n");

   return 0; // End program gracefully
}

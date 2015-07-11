#include <stdio.h>

int main(){

	// Define variable names
	float fahr, cels;
	int lower, upper, step;

	// Set bounds 
	lower = 0;
	upper = 300;
	step = 20;


	// Set fahr to lower 
	fahr = lower;


	// loop and print 
	while (fahr <= upper ){

		// Calculate celsius
		cels = 5 * (fahr-32) / 9;

		// Print 
		printf("%3.0f\t%.1f\n", fahr, cels);

		// Increment 
		fahr += step;

	}

	return 0;
}
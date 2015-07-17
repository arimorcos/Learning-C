#include <stdio.h>

void main(){

	const int nBins = 50;
	int wordLengths[nBins];
	int currChar, currWordLength;
	int i, j;

	// Set all values of wordLengths to 0 
	for (i = 0; i < nBins; ++i)
		wordLengths[i] = 0;

	// Initialize currWord
	currWordLength = 0;
	while ((currChar = getchar()) != EOF){
		// If not a whitespace character 
		if (currChar != ' ' && currChar != '\t' && currChar != '\n') {
			// Increment word length 
			currWordLength += 1;
		}
		else {
			// Increment wordLengths array 
			wordLengths[currWordLength-1] += 1;

			// Reset word length to 0 
			currWordLength = 0;
		}
	}

	// Print 
	// Title
	printf("Word Length Distribution \n");
	// Loop through each word length
	for (i = 0; i < nBins; ++i){
	
		// Print length header 
		printf("Length %2d: ", i + 1);

		// Print dash for each word length 
		for (j = 0; j < wordLengths[i]; ++j)
			printf("-");
		// printf("%2d", wordLengths[i]);
	
		// Add new line
		printf("\n");
	}

}
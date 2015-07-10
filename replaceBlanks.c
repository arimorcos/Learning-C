#include <stdio.h>

void main(){

	int currChar, lastChar;

	lastChar = 0;

	while ((currChar = getchar()) != EOF){

		// Check if last char and current char are space 
		if (lastChar != ' ' || currChar != ' ')
			printf("%c", currChar);

		// Set last char to the current character
		lastChar = currChar;
	}
	printf("\n");
}
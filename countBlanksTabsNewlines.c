#include <stdio.h>

void main() {

	int nTabs, nBlanks, nNewlines; 
	int c;
	
	nTabs = 0;
	nBlanks = 0;
	nNewlines = 0;

	while ( (c = getchar()) != EOF ){
		if (c == '\n')
			++nNewlines;
		else if (c == '\t')
			++nTabs;
		else if (c == ' ')
			++nBlanks;
	}

	printf("\n# Newlines: %3d\n", nNewlines);
	printf("# Blanks: %3d\n", nBlanks);
	printf("# Tabs: %3d\n", nTabs);
	
	// printf("\n# Newlines: %.0f\n"
	// 		"# Blanks: %.0f\n"
	// 		"# Tabs: %.0f\n",
	// 		nNewlines, nBlanks, nTabs);
}
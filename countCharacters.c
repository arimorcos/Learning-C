#include <stdio.h>

void main() {

	double nc; 

	for (nc = 0; getchar() != EOF; nc += 1){
		;
	}
	printf("\n# Characters: %.0f\n", nc);
}
#include <stdio.h>

#define MAXCHAR 128		/* maximum numeric value for read character */

/* print horizontal histogram of the character frequency of input  */
main() 
{
	int c, i, j, novfl;
	int cfreq[MAXCHAR];

	for (i = 0; i < MAXCHAR; ++i)
		cfreq[i] = 0;

	while ((c = getchar()) != EOF)
		if (c <= MAXCHAR)
			++cfreq[c];
		else
			++novfl;
			

	for (i = 0; i < MAXCHAR; ++i) 
		if (cfreq[i] > 0) {
			printf("%c %3d |", i, i);
			for (j = 0; j < cfreq[i]; j++)
				putchar('-');
			putchar('\n');
		}
	if (novfl > 0)
		printf("characters with numeric value > %d: %d\n", MAXCHAR, novfl);
}

#include <stdio.h>

#define IN 1			/* inside a word */
#define OUT 0			/* outside a word */

/* count lines, words, and characters in input */
main()
{
	/* this program can be tested with any sort of input text stream */
	/* inputs that test boundary conditions are most likely to uncover bugs (e.g., no input, no words, 1 word per line, blanks before words) */
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("lines: %d; words: %d; characters: %d\n", nl, nw, nc); /* similar to wc: prints the same values in the same order */
}

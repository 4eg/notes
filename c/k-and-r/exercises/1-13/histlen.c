#include <stdio.h>

#define MAXWORD 20		/* maximum length word size */
#define IN 1			/* inside a word */
#define OUT 0			/* outside a word */

/* print horizontal histogram of the lengths of word in input */
main() 
{
	int c, novfl;
	char i, j, state, len;
	char wordslen[MAXWORD];

	for (i = 0; i < MAXWORD; ++i)
		wordslen[i] = 0;

	state = OUT;
	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN)
				if (len < MAXWORD - 1)
					++wordslen[len-1];
				else
					++novfl;
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			len = 1;
		} else
			++len;

	for (i = 0; i < MAXWORD; ++i){
		printf("%2d |", i+1);
		for (j = 0; j < wordslen[i]; j++)
			putchar('-');
		putchar('\n');
	}
	if (novfl > 0)
		printf("words with length > %d: %d\n", MAXWORD, novfl);
}

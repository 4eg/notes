#include <stdio.h>
#define MAXLINE 20
#define TABSIZE 8

/* fold long input lines into two or more shorter lines */
int main()
{
	int c, llen, wlen, slen, toff;
	char word[MAXLINE];
	char spc[MAXLINE];

	toff = slen = wlen = llen = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') { /* end of a word */
			if (wlen > 0) {
				spc[slen] = word[wlen] = '\0';
				if (llen + slen + toff + wlen<= MAXLINE) {
					printf("%s", spc);
					llen += slen + toff;
				} else {
					putchar('\n');
					llen = 0; /* you could quick up and do not update llen if c == '\n' */
				}
				printf("%s", word);
				llen += wlen;
				toff = slen = wlen = 0;
			}
			if (c != '\n') {
				spc[slen++] = c;
				if (c == '\t')
					toff += TABSIZE - 1 - llen % TABSIZE;
			}
			if (c == '\n' || slen + toff == MAXLINE - 1) {
				putchar('\n');
				slen = llen = 0; /* slen = 0: discard spaces on a line containing only spaces */
			}				
		} else {
			word[wlen++] = c;
			if (slen + toff + wlen == MAXLINE - 1) { /* this is only entered when the line is full of non-spacing characters; -1: left for the hyphen */
				spc[slen] = word[wlen] = '\0';
				printf("%s%s-\n", spc, word);
				toff = slen = wlen = llen = 0;
			}
		}
	}
	return 0;
}

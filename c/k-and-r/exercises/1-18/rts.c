#include <stdio.h>

#define MAXSPACES 256		/* max number of blanks ans tabs buffered */

/* remove trailing blanks and tabs and delete blank lines from each line of input */
int main()
{
	int c, col, i;
	int spcbuf[MAXSPACES];

	col = i = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			if (col != 0)
				putchar(c);
			col = i = 0;
		} else if (c == ' ' || c == '\t') {
			spcbuf[i++] = c;
		} else {
			while (i > 0) {
				putchar(spcbuf[--i]);
				++col;
			}
			putchar(c);
			++col;
		}
	}
	return 0;
}

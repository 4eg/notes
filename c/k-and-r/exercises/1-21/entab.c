#include <stdio.h>
#define TABSIZE 8		/* number of characters occupied by a tab  */

/* replace strings of blanks in input with tabs and blanks */
int main()
{
	int c, col, nb;

	for (col = 1; (c = getchar()) != EOF; ++col) {
		if (c == ' ') {
			if (col % TABSIZE == 0) { /* if col is on a tab stop */
				putchar('\t');
				nb = 0;
			} else	/* store blanks to print them later if a tab is not sufficient */
				++nb;
		} else if (c == '\t') { /* handle tabs; even if we can suppose that a file indented with blanks would not contain one */
			putchar(c);
			col += TABSIZE - (col - 1) % TABSIZE - 1; /* same formula as in the detab program; -1 is to not count twice the new tab with the increment part of the for loop */
			nb = 0;	/* forget previous blanks that will be replaced with the new tab */
		} else {
			while (nb > 0) { /* print the stored blanks */
				putchar(' ');
				--nb;
			}
			putchar(c);
			if (c == '\n')
				col = 0;
		}
	}
	return 0;
}

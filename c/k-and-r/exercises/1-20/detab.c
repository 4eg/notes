#include <stdio.h>
#define TABSIZE 8		/* number of blanks occupied by a tab */

/* replace tabs in input with the proper number of blanks */
int main()
{
	int c, col, nb;

	col = 1;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			nb = TABSIZE - (col - 1) % TABSIZE;
			while (nb > 0) {
				putchar(' ');
				++col;
				--nb;
			}
		} else {
			putchar(c);
			if (c == '\n')
				col = 1;
			else
				++col;
		}
	}
	return 0;
}

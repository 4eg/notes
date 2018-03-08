#include <stdio.h>
#define MAXCOL 80
#define TABSIZE 8

void printl(char line[], int col);

/*  */
int main()
{
	int c, col, wlen;
	char line[MAXCOL];

	wlen = 0;
	for (col = 1; (c = getchar()) != EOF; ++col) {
		if (c == ' ') {
			if (col + wlen > MAXCOL)
				wlen = 1;
		} else if (c == '\n') {
			putchar(c);
			col = 0;
		} else {
			putchar(c);
		}
	}
	return 0;
}

/* printl: print line until col is reached */
void printl(char s[], int col)
{
	int i;

	for (i = 0; s < col; ++i)
		putchar(s[i]);
	if (i > 0)
		putchar('\n');
}

		

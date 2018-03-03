#include <stdio.h>

#define OUT 0
#define IN 1

/* remove all comments from a valid C program */
int main()
{
	int c, prevc, comstate, scomstate, strstate;

	prevc = -1;
	comstate = scomstate = strstate = OUT;
	while ((c = getchar()) != EOF) {
		if (comstate == IN) {
			if (prevc == '*' && c == '/') {
				comstate = OUT;
				prevc = ' ';
				putchar(prevc);
				continue;
			}
		} else if (scomstate == IN) {
			if (prevc != '\\' && c == '\n') {
				scomstate = OUT;
				putchar('\n');
			}
		} else if (strstate == IN) {
			if (prevc != '\\' && c == '"')
				strstate = OUT;
			putchar(c);
		} else
			if (c == '"') {
				strstate = IN;
				putchar(c);
			} else
				if (prevc == '/')
					if (c == '*')
						comstate = IN;
					else if (c == '/')
						scomstate = IN;
					else {
						putchar(prevc);
						putchar(c);
					}
				else if (c != '/')
					putchar(c);
		prevc = c;
	}
	return 0;
}

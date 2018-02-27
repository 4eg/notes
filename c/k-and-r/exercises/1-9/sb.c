#include <stdio.h>

/* replace a string of blanks with a single blank */
main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		if (c != ' ')
			c = getchar();
		else
			while ((c = getchar()) == ' ');
	}
}

#include <stdio.h>
#define MAXLINE 1000		/* maximum input line size */
#define MINSIZE 80		/* minimum input line size required to be printed */

int readline(char line[], int maxline);

/* print all input lines that are longer than 80 characters */
main()
{
	int len;		/* current line length */
	char line[MAXLINE];	/* current input line */

	while ((len = readline(line, MAXLINE)) > 0)
		if (len > MINSIZE)
			printf("%s", line);
	return 0;
}

/* readline: read a line into s, return real length */
int readline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	while (c != EOF && c != '\n') {
		++i;
		c = getchar();
	}
	return i;
}

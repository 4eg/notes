#include <stdio.h>
#define MAXLINE 10		/* maximum input line size */

int readline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main()
{
	int len;		/* current line length */
	int max;		/* maximum length seen so far */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while ((len = readline(line, MAXLINE)) > 0) {
		printf("%3d: %s\n", len, line);
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)		/* there was a line */
		printf("longest: %s", longest);
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
	while (c != EOF && c != '\n') { /* continue to increment i while EOL is not reached */
		++i;
		c = getchar();
	}
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

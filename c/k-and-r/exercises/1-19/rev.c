#include <stdio.h>
#define MAXLINE 1000		/* maximum input line size */

int readline(char line[], int maxline);
void reverse(char line[]);

/* reverse input a line at a time */
main()
{
	char line[MAXLINE];	/* current input line */

	/* if the prototype of reverse was not given, one could have stored the size returned by readline and pass it as an argument to reverse */
	while ((readline(line, MAXLINE)) > 0) {
		reverse(line);
		printf("%s", line);
	}
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

/* reverse: reverse the order of the characters of s */
void reverse(char s[])
{
	int maxi, i;		/* maximum accessible index, index */
	char t;			/* temporary character stored when swapping */

	for (maxi = 0; s[maxi] != '\0'; ++maxi); /* compute the size of s */
	if (maxi > 1) {		/* ensure that maxi is a valid index, plus no need to reverse empty or single character lines */
		--maxi;		/* back off from the null terminator */
		if (s[maxi] == '\n') /* ignore the newline when reversing*/
			--maxi;
		for (i = 0; i < (maxi + 1) / 2; ++i) { /* swap each character with the one symmetrically opposed by the middle */
			t = s[i];
			s[i] = s[maxi - i];
			s[maxi - i] = t;
		}
	}
}

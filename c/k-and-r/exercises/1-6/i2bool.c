#include <stdio.h>

/* print the value of the expression getchar() != EOF */
main()
{
	int t;

	while (t = getchar() != EOF)
		printf("%d", t);
	printf("%d", t);
}

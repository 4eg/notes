/* "test" program: print input */
int main()
{
	// Declarations
	int/* <- type | name -> */c;

	/*<stdio.h> should be "included":*/printf("/* Read \"input\": \t*/\n");/* \n: newline */
	while ((c = getchar()) != -1) // read every character \
from input until EOF
		putchar(c);	/* print read
				   character */
	return 0;//No errors encountered
}

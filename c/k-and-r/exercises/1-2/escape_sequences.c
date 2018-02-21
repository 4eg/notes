#include <stdio.h>

main()
{
	printf("\a");		/* Alert (Beep, Bell) (added in C89) */
	printf("\b");		/* Backspace */
	printf("\f");		/* Formfeed */
	printf("\n");		/* Newline (Line Feed) */
	printf("\r");		/* Carriage Return */
	printf("\t");		/* Horizontal Tab */
	printf("\v");		/* Vertical Tab */
	printf("\\");		/* Backslash */
	printf("\'");		/* Single quotation mark */
	printf("\"");		/* Double quotation mark */
	printf("\?");		/* Question mark (used to avoid trigraphs) */
	printf("\101");		/* The byte whose numerical value is given by ooo interpreted as an octal number; this number is composed of 1 to 3 digits*/
	printf("\x41");		/* The byte whose numerical value is given by 41 interpreted as a hexadecimal number; this number is composed of at least one digit */
	printf("\e");		/* Escape character */
	printf("\u263A");	/* Unicode code point below 0xFFFF; it appears that you cannot use characters that does not need a unicode reprentation (e.g., ASCII characters) */
	printf("\U0001F642");	/* Unicode code point above 0xFFFF */
}

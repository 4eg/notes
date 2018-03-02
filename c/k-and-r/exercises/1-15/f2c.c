#include <stdio.h>

float celsius(float fahr);

/* print Fahrenheit-Celsius table */
main()
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, celsius(fahr));
}

/* ftoc: convert a temperature from Fahrenheit to Celsius */
float celsius(float fahr)
{
	return (5.0/9.0)*(fahr-32);
}

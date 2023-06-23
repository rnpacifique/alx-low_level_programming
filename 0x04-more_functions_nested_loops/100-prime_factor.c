#include <stdio.h>
/**
 * main - Print prime numbers
 * Return: 0
 */

int main(void)
{
	long number = 612852475143;
	long divisor = 2;
	long largprim = 0;

	while (number != 1)
	{
		if (number % divisor == 0)
		{
			number = number / divisor;
			largprim = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", largprim);
	return (0);
}

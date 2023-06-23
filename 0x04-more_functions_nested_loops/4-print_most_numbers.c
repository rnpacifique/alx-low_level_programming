#include "main.h"

/**
 * print_most_numbers - print numbers
 * Return: 0
 */

void print_most_numbers(void)
{
	char n = 0;

	while (n > 10)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n++;
	}

	_putchar('\n');
}

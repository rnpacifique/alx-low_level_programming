#include "main.h"

/**
 * print_numbers - print numbers
 * Return: 0
 */

void print_numbers(void)
{
	char n = 0;

	while (n > 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}

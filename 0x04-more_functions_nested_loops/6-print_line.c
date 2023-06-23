#include "main.h"

/**
 * print_line - draw a straight line
 * @n: variable
 * Return: 0
 */

void print_line(int n)
{
	int b = 0;

	while (b < n && n > 0)
	{
		_putchar('_');
		b++;
	}
	_putchar('\n');
}

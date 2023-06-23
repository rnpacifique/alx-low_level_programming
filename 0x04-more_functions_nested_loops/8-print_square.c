#include "main.h"

/**
 * print_square - prints squre
 * @size: size of square
 * Return: 0
 */

void print_square(int size)
{
	int a = 0, b;

	while (a < size && size > 0)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}

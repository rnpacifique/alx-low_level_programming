#include "main.h"


/**
 * _puts - prints a string
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	char *c;
	int a;

	c = str;

	for (a = 0; c[a]; a++)
	{
		_putchar(c[a]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: used string
 * Return: 0
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
		_putchar(s[a]);
	_putchar('\n');
}

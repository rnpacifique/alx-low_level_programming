#include "main.h"


/**
 * puts2 - prints character of a string
 * @str: the string to be prited
 * Return: 0
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * more_numbers - Print from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	char n, a;
	int b = '0';

	while (b < 10)
	{
		for  (n = 0; n <= 14; n++)
		{
			n = a;
			if (n > 9)
			{
				_putchar('1');
				a = n % 10;
			}
			_putchar('0' + a);
		}
		_putchar('\n');
		b++;
	}
}

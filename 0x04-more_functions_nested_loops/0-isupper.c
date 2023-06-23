#include "main.h"

/**
 * _isupper - Checks if letter is uppercase
 * @c: print integer
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

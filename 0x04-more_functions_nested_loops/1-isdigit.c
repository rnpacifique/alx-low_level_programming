#include "main.h"

/**
 * _isdigit - Check if letter is a digit
 * @c: print int
 * Return: 0 if false, if true
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= 9)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}


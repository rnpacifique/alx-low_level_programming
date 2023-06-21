#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @c: The number to be computed
 * Return: 0
 */

int _abs(int c)
{

	if (c < 0)
	{
		return (c * (-1));
	}

	else if (c == 0)
	{
		return (0);
	}

	else
	{
		return (c);
	}

}

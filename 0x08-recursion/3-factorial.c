#include "main.h"


/**
 * factorial - the factorial of a given number
 * @n: given number
 * Return: -1 to indicate an error
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}


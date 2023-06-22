#include "main.h"

/**
 * largest_number - Return the largest numbers
 * @a: first integer
 * @b: second interger
 * @c: third interger
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}

	return (largest);
}


#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of array in the arry
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int f;
	int *start, *end, b;

	start = a;
	end = a;

	for (f = 0; f < n / 2; f++)
	{
		end++;
	}
	for (f = 0; f < n / 2; f++)
	{
		b = *end;
		*end = *start;
		*start = b;

		start++;
		end--;
	}
}

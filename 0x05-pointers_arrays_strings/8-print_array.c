#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: interger
 * @n: integer
 */

void print_array(int *a, int n)
{
	int e;

	e = 0;
	for (n--; n >= 0; n--, e++)
	{
		printf("%d", a[e]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");
}

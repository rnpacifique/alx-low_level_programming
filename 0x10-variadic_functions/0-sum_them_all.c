#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - print sum of all parameters
 * @n: first paramenter
 * @(...): other parameters
 * Return: sum or 0 If n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a;
	int sum = 0;

	va_start(numbers, n);


	if (n == 0)
	{
		return (0);
	}
	for (a = 0; a < n; a++)
		sum = sum + va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}


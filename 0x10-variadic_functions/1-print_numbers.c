#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a;

	va_start(numbers, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && a != (n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}




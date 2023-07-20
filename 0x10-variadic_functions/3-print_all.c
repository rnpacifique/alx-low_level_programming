#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list anything;
	unsigned int i = 0, j, c = 0;
	char *string;
	const char t_arg[] = "cifs";

	va_start(anything, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(",");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(anything, int));
				break;
			case 'i':
				printf("%d", va_arg(anything, int));
				break;
			case 'f':
				printf("%f", va_arg(anything, double));
				break;
			case 's':
				string = va_arg(anything, char *);
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		} i++;
	}
	printf("\n"), va_end(anything);
}



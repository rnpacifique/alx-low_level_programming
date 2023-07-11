#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: copied string
 * Return: a pointer to thecopied string.
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i, length = 0;

	for (i = 0; str[i]; i++)
		length++;

	copy = malloc((length + 1) * sizeof(char));

		if (copy == NULL)
			return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[length] = '\0';
	return (copy);
}



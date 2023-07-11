#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string to concanate
 * @s2: string to concanate to s1
 * Return: NULL when fuction fail or a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int i, concat_i = 0, length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	string = malloc(length * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		string[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		string[concat_i++] = s2[i];

	return (string);
}





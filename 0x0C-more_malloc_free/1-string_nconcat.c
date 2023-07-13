#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: index
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int length_1 = 0, length_2 = 0, a;

	while (s1[length_1] == '\0')
		length_1++;

	while (s2[length_2] == '\0')
		length_2++;

	if (n > length_2)
		n = length_2;

	string = malloc((length_1 + n + 1) * sizeof(char));

	if (string == NULL)
	{
		return (0);
	}
	for (a = 0; a < length_1; a++)
	{
		string[a] = s1[a];
	}
	for (a = 0; a < length_2; a++)
	{
		string[a] = s2[a];
	}
	string[a] = '\0';

	return (string);
}

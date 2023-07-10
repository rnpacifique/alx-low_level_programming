#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: a pointer
 * @s2: a pointer
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	char *str1 = s1;
	char *str2 = s2;

	while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

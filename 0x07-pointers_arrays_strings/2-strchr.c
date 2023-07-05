#include "main.h"


/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int indx;

	for (indx = 0; s[indx] >= '\0'; indx++)
	{
		if (s[indx] == c)
			return (s + indx);
	}
	return ('\0');
}

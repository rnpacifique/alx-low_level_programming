#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int leng = 0;

	while (s[leng])
		leng++;
	return (leng);
}

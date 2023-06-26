#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: A pointer to be changed
 * @src: A pointer to be changed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

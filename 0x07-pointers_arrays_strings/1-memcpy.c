#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area where memory area copied to be stored
 * @src: memory area where copies from
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		src[j] = dest[j];
	}
	return (dest);
}

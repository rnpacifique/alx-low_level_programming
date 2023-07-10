#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: area in memory to fill
 * @b: constant byte
 * @n: bytes of the memory area pointed to by s
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

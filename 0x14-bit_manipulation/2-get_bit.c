#include "main.h"

/**
 * get_bit - return value  of a bit at a given index.
 * @n: bit to search
 * @index: index of bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}


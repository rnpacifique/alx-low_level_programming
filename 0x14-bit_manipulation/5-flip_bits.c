#include "main.h"

/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: starting value
 * @m: next value
 * Return: number of bite flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int binary;
	unsigned long int xor = n ^ m;
	int a;
	int count = 0;
	
	for (a = 63; a >= 0; a--)
	{
	       	binary = xor >> a;
		if (binary & 1)
			count++;
	}
	return (count);
}

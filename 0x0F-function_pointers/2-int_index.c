#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - print an integer
 * @array: array
 * @size: size of element
 * @cmp: pointer to an element
 * Return: index of first element
 * -1 If no element matches or If size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
		if (cmp(array[a]))
			return (a);
	return (-1);
}



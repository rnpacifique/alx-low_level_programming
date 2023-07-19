#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - print elements of an array
 * @array: an array
 * @size: size of array
 * @action: pointer to array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}


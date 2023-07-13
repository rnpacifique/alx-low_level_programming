#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first value of array
 * @max: last value of array
 * Return: pointer to the newly created array
 * NULL If min > max or If malloc fails
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}




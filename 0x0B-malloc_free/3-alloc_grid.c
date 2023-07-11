#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - print a gring of integers
 * @width: width of a grid
 * @height: height of a grid
 * Return: a grid or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if  (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grid = malloc(height * sizeof(int *));
		if (grid[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(grid[a]);
			}
			free(grid[a]);
			return (NULL);
		}
	}
	for (a = 0; b < width; b++)
		grid[a][b] = 0;
	return (grid);
}





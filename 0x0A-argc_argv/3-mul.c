#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication
 * @argc: number of arguments
 * @argv: arguments
 * Return: return 1 or Error
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}

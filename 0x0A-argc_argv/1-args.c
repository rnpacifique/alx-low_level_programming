#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: count number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

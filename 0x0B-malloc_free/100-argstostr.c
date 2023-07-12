#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of program
 * @ac: number of arguamants
 * @av: array of pointers
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int argmnt, byte, indx, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (argmnt = 0; argmnt < ac; argmnt++)
	{
		for (byte = 0; av[argmnt][byte]; byte++)
			size++;
	}

	string = malloc(size + 1 * sizeof(char));

	if (string == NULL)
		return (NULL);

	indx = 0;

	for (argmnt = 0; argmnt < ac; argmnt++)
	{
		for (byte = 0; av[argmnt][byte]; byte++)
			string[indx++] = av[argmnt][byte];
		string[indx++] = '\n';
	}
	string[size] = '\0';

	return (string);
}

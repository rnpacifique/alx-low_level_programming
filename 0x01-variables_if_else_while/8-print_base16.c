#include <stdio.h>
/**
 * main - Entry point
 * prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int d = 48;

	while (d <= 102)
	{
		if (d == 57)
			d += 39;
		++d;
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * prints the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

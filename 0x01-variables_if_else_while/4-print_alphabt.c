#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * a program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');
	return (0);
}	




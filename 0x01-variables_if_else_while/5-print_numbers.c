#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point 
 * prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		printf("%d", s);
	}
	putchar('\n');
	return (0);
}

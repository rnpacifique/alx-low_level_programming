#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int sd;

	for (sd = '0'; sd <= '9'; sd++)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

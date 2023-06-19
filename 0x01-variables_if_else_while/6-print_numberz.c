#include<stdio.h>
/**
 * main - Entry point
 *  prints all single digit numbers of base 10 starting from 0
 *  Return: 0
 */
int main(void)
{
	int digt = 0;

	while (digt <= 9)
	{
		putchar(digt + '0');
		++digt;
	}
	putchar('\n');
	return (0);
}

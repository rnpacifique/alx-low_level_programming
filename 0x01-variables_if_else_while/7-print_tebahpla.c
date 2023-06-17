#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * prints the lowercase alphabet in reverse,
 * Return: 0
 */
int main(void)
{
	int low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}

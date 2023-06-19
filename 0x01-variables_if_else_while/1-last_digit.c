#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Discription: Code to print the last digit of the number stored in the variable n
 * Return: 0
 */
int main(void)
{
	int n, lsd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lsd = n % 10;
	if (lsd > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lsd);
	}
	else if (lsd == 0)
	{
		printf("last digit of %d is %d and 0\n", n, lsd);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lsd);
	}
	return (0);
}

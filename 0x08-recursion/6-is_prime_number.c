#include "main.h"

int evaluate_prime(int n, int i);

/**
 * is_prime_number - evaluate if number is prime
 * @n: number to evaluate
 * Return: return 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (1);
	return (evaluate_prime(n, n - 1));
}
/**
 * evaluate_prime_number - recursion loop
 * @n: number to evaluate
 * @i: iterator
 * Return: return 1 if number is prime, 0 if not
 */
int evaluate_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (evaluate_prime(n, i - 1));
}

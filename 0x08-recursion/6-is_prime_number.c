#include "main.h"
/**
 * check_prime - Recursive helper function to check if a number is prime.
 * @n: The number to check.
 * @divisor: The current divisor to check against.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	if (n % divisor == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}


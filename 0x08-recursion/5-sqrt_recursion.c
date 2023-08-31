#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return:natural sqrt of @n, or -1 if @n dont have a natural sqrt.
 */
int _sqrt_recursion(int n)
{
	return (helper_sqrt(n, 1));
}

/**
 * helper_sqrt - Recursive helper function to find the square root.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return:natural sqrt of @n, or -1 if @n dont have a natural sqrt.
 */
int helper_sqrt(int n, int guess)
{
	if (n < 0)
		return (-1);

	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (helper_sqrt(n, guess + 1));
}


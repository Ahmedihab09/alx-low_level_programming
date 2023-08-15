#include <stdio.h>

/**
 * print_last_digit - Print the last digit of a number.
 * @n: The number whose last digit is to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	return (last_digit);
}

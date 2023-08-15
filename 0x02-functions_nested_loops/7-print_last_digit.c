#include "main.h"

/**
 * print_last_digit - Get and return the last digit of a number.
 * @n: The number whose last digit is to be retrieved.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit = n % 10;

    if (last_digit < 0)
        last_digit = -last_digit;

    return last_digit;
}

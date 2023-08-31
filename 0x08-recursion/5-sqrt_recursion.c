#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of @n, or -1 if @n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return n;

    return recursive_sqrt(n, 1, n);
}

/**
 * recursive_sqrt - Recursive function to find the square root.
 * @n: The number to calculate the square root of.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 *
 * Return: The natural square root of @n, or -1 if @n does not have a natural square root.
 */
int recursive_sqrt(int n, int low, int high)
{
    int mid = (low + high) / 2;
    
    if (mid * mid == n)
        return mid;

    if (mid * mid > n)
        return recursive_sqrt(n, low, mid - 1);

    if (mid * mid < n)
        return recursive_sqrt(n, mid + 1, high);

    return -1;
}


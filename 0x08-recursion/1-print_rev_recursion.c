#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to print in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}


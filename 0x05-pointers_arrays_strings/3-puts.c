#include "main.h"

/**
 * _puts - Prints a string followed by a newline to stdout.
 * @str: The input string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

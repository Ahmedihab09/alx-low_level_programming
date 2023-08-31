#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The input string.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Hello, Recursive World!";

	_puts_recursion(str);
	return (0);
}


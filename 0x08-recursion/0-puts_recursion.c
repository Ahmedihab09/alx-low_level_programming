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


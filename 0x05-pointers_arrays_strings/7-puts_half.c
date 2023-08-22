#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
	int len = 0;
	int s_index;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		s_index = len / 2;
	else
	{
		s_index = (len - 1) / 2;
		s_index++;
	}

	while (str[s_index] != '\0')
	{
		putchar(str[s_index]);
		s_index++;
	}
	putchar('\n');
}

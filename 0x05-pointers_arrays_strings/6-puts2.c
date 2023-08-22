#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints each character of string,starting with the first character.
 * @str: The input string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
		if (str[i] == '\0')
			break;

		i++;
	}

	putchar('\n');
}

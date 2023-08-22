#include <stdio.h>
#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: The input string.
 */
void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	end = start + length - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}


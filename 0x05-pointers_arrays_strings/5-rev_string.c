#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: The input string.
 */
void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}	

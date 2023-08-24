#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i = 0, j;
	char *letters = "aeotlAEOTL";
	char *numbers = "4307143071";

	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
				str[i] = numbers[j];
			j++;
		}
		i++;
	}

	return (str);
}


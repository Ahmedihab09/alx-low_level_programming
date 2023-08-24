#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= ('a' - 'A');

	while (str[i] != '\0')
	{
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= ('a' - 'A');
				break;
		}
		i++;
	}

	return (str);
}


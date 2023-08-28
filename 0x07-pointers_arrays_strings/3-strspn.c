#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing the accepted bytes.
 *
 * Return: num of bytes in init segment of @s consisting of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int found = 1;

	while (*s && found)
	{
		char *a = accept;
		found = 0;


		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (found)
		{
			len++;
			s++;
		}
	}

	return (len);
}


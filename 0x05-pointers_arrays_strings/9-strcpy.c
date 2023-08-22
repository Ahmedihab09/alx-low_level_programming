#include "main.h"
/**
 * _strcpy - Copy string pointed to by src to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}

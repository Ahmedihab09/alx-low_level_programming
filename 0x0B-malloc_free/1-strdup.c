#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate string in dynamically allocated memory.
 * @str: The string to duplicate.
 *
 * Return:pointer to duplicated string, or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}


#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create array of chars & initialize it with specific char.
 * @size: The size of the array to create.
 * @c: The character with which to initialize the array.
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}


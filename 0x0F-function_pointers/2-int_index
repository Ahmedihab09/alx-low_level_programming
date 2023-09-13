#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first matching element; -1 if no match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return -1;

	int i;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return i;
	}

	return -1;
}

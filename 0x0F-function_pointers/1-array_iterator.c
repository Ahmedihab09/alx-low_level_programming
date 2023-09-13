#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 *
 * @array: The integer array to operate on.
 * @size: The size of the array.
 * @action: A pointer to the function to execute on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
/* Example function to be used with array_iterator */
void print_element(int element)
{
    printf("%d ", element);
}

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name.
 *
 * @name: The name to print.
 * @f: A function pointer for printing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}

/**
 * print_name_function - A function to print the name.
 *
 * @name: The name to print.
 */
void print_name_function(char *name)
{
	if (name != NULL)
		printf("Name: %s\n", name);
}

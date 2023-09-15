#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The integers to be printed.
 *
 * Description: This function prints a list of integers separated by
 * the specified separator string. If the separator is NULL, it is not
 * printed. A new line is printed at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

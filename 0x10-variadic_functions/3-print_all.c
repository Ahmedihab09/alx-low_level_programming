#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints arguments based on format.
 * @format: A string containing the format for the arguments.
 * @...: The arguments to be printed.
 *
 * Description: This function prints arguments based on the provided
 * format string. 'c' for char, 'i' for integer, 'f' for float, and 's'
 * for string. If the string is NULL, it prints (nil) instead.
 * Any other character in the format string is ignored. A new line is
 * printed at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;

			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;

			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;

			default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}


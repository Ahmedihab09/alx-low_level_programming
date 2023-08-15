#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the first digit */
		for (col = 1; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');
			result = row * col;
			if (result < 10)
				_putchar(' '); /* Print a space for single-digit numbers */
			else
				_putchar('0' + result / 10);
			_putchar('0' + result % 10);
		}
		_putchar('\n');
	}
}

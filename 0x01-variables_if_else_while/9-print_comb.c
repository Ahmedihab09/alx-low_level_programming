#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints combinations of single-digit numbers using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	putchar('0');

	for (num = 1; num <= 9; num++)
	{
		putchar(',');
		putchar(' ');
		putchar(num + '0');
	}

	putchar('\n');

	return (0);
}

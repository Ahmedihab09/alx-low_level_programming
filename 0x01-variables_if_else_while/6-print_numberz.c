#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single digit numbers in base 10 using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		putchar('\n');
	}

	return (0);
}


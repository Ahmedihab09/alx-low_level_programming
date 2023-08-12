#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

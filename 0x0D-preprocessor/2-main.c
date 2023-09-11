#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This program prints the name of the file it was compiled from, followed by a newline.
 *
 * Return: 0 on success.
 */

int main(void)
{
	printf("Compiled from file: %s/n", __FILE__);
	return (0);
}

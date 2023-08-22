#include "main.h"
/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 * @n: A pointer to an integer.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 42;
	int *ptr = &num;

	reset_to_98(ptr);

	return (0);
}

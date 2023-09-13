#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a function.
 *
 * @ptr: Pointer to the function to extract opcodes from.
 * @num_bytes: Number of bytes to print.
 */
void print_opcodes(char *ptr, int num_bytes)
{
	if (ptr != NULL && num_bytes > 0)
	{
		int i;

		for (i = 0; i < num_bytes; i++)
		{
			printf("%02x", (unsigned char)ptr[i]);
		}
		printf("\n");
	}
}

/**
 * main - Entry point for the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 upon success, 1 for incorrect number of arguments,
 *         2 for negative number of bytes.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((char *)main, num_bytes);

	return (0);
}


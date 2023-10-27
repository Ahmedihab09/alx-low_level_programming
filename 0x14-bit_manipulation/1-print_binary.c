#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long int to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) > 0)
		{
			flag = 1;
			printf("1");
		}
		else if (flag == 1)
		{
			printf("0");
		}
		mask = mask >> 1;
	}
}


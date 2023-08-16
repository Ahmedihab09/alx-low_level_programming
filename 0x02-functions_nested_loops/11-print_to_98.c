#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
        for (i = n; i <= 98; i++)
        {
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
	}
	else if (n > 98)
	{
        for (i = n; i >= 98; i--)
        {
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
	}
	else
	{
		printf("98");
    	}
	printf("\n");
}

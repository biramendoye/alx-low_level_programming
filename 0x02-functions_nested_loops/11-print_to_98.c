#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: an integer
 *
 */
void print_to_98(int n)
{
	int NUMBER = 98;
	int i = n;

	if (n <= NUMBER)
	{
		while (i <= NUMBER)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			i++;
		}
	}
	else
	{
		while (i >= NUMBER)
		{
			printf("%d", i);
			if (i != NUMBER)
				printf(", ");
			i--;
		}
	}

	printf("\n");
}

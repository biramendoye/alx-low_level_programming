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
	int i = n;

	while (i <= 98)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}

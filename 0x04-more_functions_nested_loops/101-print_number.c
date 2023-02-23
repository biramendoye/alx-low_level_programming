#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: an integer number
 */
void print_number(int n)
{
	int size, i;
	int digits[10];

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n < 10)
		size = 1;
	else if (n < 100)
		size = 2;
	else if (n < 1000)
		size = 3;
	else if (n < 10000)
		size = 4;
	else
		size = 5;

	i = size - 1;


	while (n != 0)
	{
		digits[i--] = n % 10;
		n /= 10;
	}

	for (i = 0; i < size; i++)
		_putchar('0' + digits[i]);
}

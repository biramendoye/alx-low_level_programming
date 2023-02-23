#include "main.h"

/**
 * print_num - prints a  number
 *
 * @num: an integer number
 */
void print_num(int num)
{
	if (num < 10)
		_putchar('0' + num);
	else
	{
		_putchar('0' + (num / 10));
		_putchar('0' + (num % 10));
	}
}

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
			print_num(j);
		_putchar('\n');
	}
}

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
		int digits[2];
		int i = 1;

		while (num != 0)
		{
			digits[i--] = num % 10;
			num /= 10;
		}

		for (i = 0; i < 2; i++)
			_putchar('0' + digits[i]);
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

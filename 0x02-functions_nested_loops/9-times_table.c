#include "main.h"

/**
 * print_num - prints a  number
 *
 * @num: an integer number
 */
void print_num(int num)
{
	if (num < 10)
	{
		_putchar('0' + num);
	}
	else
	{
		_putchar('0' + (num / 10));
		_putchar('0' + (num % 10));
	}
}


/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int i, j, r;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			r = j * i;

			if (i == 9)
			{
				if (r < 10)
					_putchar(' ');
				print_num(r);
			}
			else
			{
				if (r < 10 && i != 0)
					_putchar(' ');
				print_num(r);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

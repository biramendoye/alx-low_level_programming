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
	else if (num < 100)
	{
		_putchar('0' + (num / 10) % 10);
		_putchar('0' + (num % 10));
	}
	else if (num < 1000)
	{
		_putchar('0' + (num / 100) % 10);
		_putchar('0' + (num / 10) % 10);
		_putchar('0' + (num % 10));
	}
}


/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: an integer
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n >= 0 && n <= 15)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				r = j * i;

				if (i != 0 && r < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					print_num(r);

				}
				else if (i != 0 && r < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					print_num(r);
				}
				else if (i != 0 && r < 1000)
				{
					_putchar(',');
					_putchar(' ');
					print_num(r);
				}
				else
					print_num(r);
			}
			_putchar('\n');
		}
	}
}

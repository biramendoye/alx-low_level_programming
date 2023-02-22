#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int i, j, r;
	int factor = 9;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 9; i++)
		{
			r = i * factor;
			_putchar('0' + r);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		r = i * factor;
		_putchar('0' + r);
		_putchar('\n');
	}
}

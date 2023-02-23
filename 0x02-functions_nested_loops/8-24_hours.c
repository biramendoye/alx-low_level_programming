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
		_putchar('0');
		_putchar('0' + num);
	}
	else
	{
		_putchar('0' + (num / 10));
		_putchar('0' + (num % 10));
	}
}

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 */
void jack_bauer(void)
{
	int hour, minute;
	int MAX_HOUR = 24;
	int MAX_MIN = 60;

	for (hour = 0; hour < MAX_HOUR; hour++)
	{
		minute = 0;
		while (minute < MAX_MIN)
		{
			print_num(hour);
			_putchar(':');
			print_num(minute);
			minute++;
			_putchar('\n');
		}

	}
}

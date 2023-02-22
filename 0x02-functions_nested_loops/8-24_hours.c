#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 */
void jack_bauer(void)
{
	int hour, minute;
	int max_hour = 24;
	int max_min = 60;

	hour = 0;
	while (hour < max_hour)
	{
		if (hour < 10)
		{
			_putchar('0');
		}
		_putchar('0' + hour);
		_putchar(':');

		minute = 0;
		while (minute < max_min)
		{
			if (minute < 10)
			{
				_putchar('0');
			}
			_putchar('0' + minute);
			minute++;
			_putchar('\n');
		}
		hour++;
	}
}

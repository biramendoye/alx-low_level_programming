#include "main.h"

/**
 * print_under10 - print 10 <= n < 100
 *
 * @n: integer
 */
void print_under10(int n)
{
	_putchar('0' + n);
}
/**
 * print_under100 - print 100 <= n < 1000
 *
 * @n: integer
 */
void print_under100(int n)
{
	_putchar('0' + (n / 10));
	_putchar('0' + (n % 10));
}
/**
 * print_under1000 - print 100 <= n < 1000
 *
 * @n: integer
 */
void print_under1000(int n)
{
	_putchar('0' + (n / 100));
	print_under100(n % 100);
}
/**
 * print_under10000 - print 1000 <= n < 10000
 *
 * @n: integer
 */
void print_under10000(int n)
{
	_putchar('0' + (n / 1000));
	print_under1000(n % 1000);
}

/**
 * print_number - print number
 *
 * @n: integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n >= 0 && n < 10)
		print_under10(n);
	else if (n >= 10 && n < 100)
	{
		print_under100(n);
	}
	else if (n >= 100 && n < 1000)
	{
		print_under1000(n);
	}
	else if (n >= 1000 && n < 10000)
	{
		print_under10000(n);
	}
}

#include <stdio.h>

/**
 * print_num - prints a  number
 *
 * @num: an integer number
 */
void print_num(int num)
{
	if (num < 10)
	{
		putchar('0');
		putchar('0' + num);
	}
	else
	{
		putchar('0' + (num / 10));
		putchar('0' + (num % 10));
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i != j && i < j)
			{
				print_num(i);
				putchar(' ');
				print_num(j);

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
}

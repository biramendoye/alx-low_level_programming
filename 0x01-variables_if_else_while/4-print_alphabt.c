#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int letter_q = 113;
	int letter_e = 101;

	for (i = 97; i <= 122; i++)
	{
		if (!(i == letter_q) && !(i == letter_e))
			putchar(i);
	}
	putchar(10);
	return (0);
}

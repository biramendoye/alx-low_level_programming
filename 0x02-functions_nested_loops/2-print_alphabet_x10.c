#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
		int i = 0;

		while (alphabet[i] != '\0')
		{
			_putchar(alphabet[i]);
			i++;
		}
		_putchar('\n');
	}
}


#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: a string
 */
void _puts(char *str)
{
	char i = *str;
	int j = 0;

	while (i != '\0')
	{
		_putchar(*(str + j));
		j++;
		i = *(str + j);
	}
	_putchar('\n');
}

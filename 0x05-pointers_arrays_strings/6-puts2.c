#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: a string
 */
void puts2(char *str)
{
	char i = *str;
	int j = 0;

	while (i != '\0')
	{
		_putchar(*(str + j));
		j += 2;
		i = *(str + j);
	}
	_putchar('\n');
}

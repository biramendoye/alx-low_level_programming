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
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
			_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}

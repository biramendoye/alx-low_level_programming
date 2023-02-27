#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: a string (a poniter to char)
 *
 * Return: An integer that represents the length of a string
 */
int _strlen(char *s)
{
	char i = *s;
	int count = 0;

	while (i != '\0')
	{
		count++;
		i = *(s + count);
	}
	return (count);
}

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: a string
 */
void puts_half(char *str)
{
	int start = _strlen(str) / 2;
	int end = _strlen(str);

	while (start < end)
	{
		_putchar(*(str + start));
		start++;
	}
	_putchar('\n');
}

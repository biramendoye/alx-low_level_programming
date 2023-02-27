#include "main.h"
#include <stdio.h>

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
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: a string (a poniter to char)
 */
void print_rev(char *s)
{
	char i = *s;
	int j = _strlen(s) - 1;

	while (i != '\0')
	{
		_putchar(*(s + j));
		j--;
		i = *(s + j);
	}
	_putchar('\n');
}

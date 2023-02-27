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

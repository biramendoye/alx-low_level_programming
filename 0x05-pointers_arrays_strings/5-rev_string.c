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
 * rev_string - reverses a string.
 *
 * @s: a string (a pointer to char)
 */
void rev_string(char *s)
{
	int j = _strlen(s) - 1;
	int i = 0;
	char tmp;

	while (i != j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
		i++;
	}
}

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
	const int SIZE = _strlen(s);
	int j = SIZE - 1;
	int i = 0;
	char tmp;

	if (SIZE == 0)
		return;

	while (i < (SIZE / 2))
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
		i++;
	}
}

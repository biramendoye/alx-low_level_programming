#include "main.h"

/**
 * _strcmp - compare two strings,
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if s1 greater than s2, O if s1 = s2 and -1 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((int) (s1[i] - s2[i]));
		i++;
	}

	return (0);
}

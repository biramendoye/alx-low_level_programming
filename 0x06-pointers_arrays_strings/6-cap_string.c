#include "main.h"

/**
 * is_separator - Checks if a char is a separator
 * @c: A specific character
 * Return: 1 if c is a separator, -1 otherwise
 */
int is_separator(char c)
{
	int i;
	char separators[13] =  {
	' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};

	for (i = 0; i < 13; i++)
	{
		if (c == separators[i])
			return (1);
	}

	return (-1);
}

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: the string to capitalize
 * Return: the modified version  of str
 */
char *cap_string(char *str)
{
	int j = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= (char)32;

	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			if (is_separator(str[j - 1]) == 1)
				str[j] -= (char)32;
		}
		j++;
	}

	return (str);
}

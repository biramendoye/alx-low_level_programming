#include "main.h"

/**
 * _index - find the index of a char
 * @str: the string input
 * @c: the char to lookup
 * Return: index of the char, -1  otherwise
 */
int _index(char *str, char c)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (c == str[i])
			return (i);
	}
	return (-1);
}
/**
 * rot13 - encode a string with ro13
 * @str: the string input
 * Return: the encoding string
 */
char *rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = _index(input, str[i]);

		if (j != -1)
			str[i] = output[j];
	}

	return (str);
}

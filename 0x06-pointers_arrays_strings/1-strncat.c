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
 * _strncat - concatenates two strings.use at most n bytes from src;
 * and src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: string destination
 * @src: string source
 * @n: number of byte to copy
 *
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char cursor  = *(src);
	int i = _strlen(dest);
	int j = 0;

	while (cursor != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		cursor = src[j];
	}

	return (dest);
}

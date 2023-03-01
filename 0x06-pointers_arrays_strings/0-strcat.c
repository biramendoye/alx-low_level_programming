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
 * _strcat - concatenates two strings.
 *
 * @dest: a pointer pointed to the string destination
 * @src: a pointer pointed to the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char cursor  = *(src);
	int i = _strlen(dest);
	int j = 0;

	while (cursor != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		cursor = src[j];
	}
	dest[i] = '\0';

	return (dest);
}

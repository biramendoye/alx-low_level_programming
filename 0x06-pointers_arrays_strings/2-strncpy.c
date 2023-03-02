#include "main.h"

/**
 * _strncpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: a pointer pointed to the string destination
 * @src: a pointer pointed to the string to copy
 * @n: number of byte to be copied
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char cursor  = *(src);
	int i = 0;

	while (cursor != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
		cursor = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: a pointer pointed to the string destination
 * @src: a pointer pointed to the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char cursor  = *(src);
	int i = 0;

	while (cursor != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
		cursor = *(src + i);
	}
	return (dest);
}

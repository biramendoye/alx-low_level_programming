#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check
 *
 * Return: 1 if @c is lowercase or uppercase *
 * O otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}


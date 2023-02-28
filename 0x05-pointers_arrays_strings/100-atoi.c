#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: a string
 *
 * Return: an int
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int output = 0;
	int minus_sign  = 0;
	int first_digit  = 0;

	while (s[i] != '\0')
	{
		if (!first_digit)
		{
			if (s[i] == '-')
				minus_sign++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			first_digit  =  1;
			output = (output * 10) + ((int)s[i] - 48);
		}

		if (first_digit && (s[i] < 48 || s[i] > 57))
			break;
		i++;
	}

	if (minus_sign % 2 != 0)
		output *= -1;

	return (output);
}

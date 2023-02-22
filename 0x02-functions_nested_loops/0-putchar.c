#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char info[] = "_putchar";
	int i = 0;

	while (info[i] != '\0')
	{
		_putchar(info[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

#include <stdio.h>
#include  <inttypes.h>

/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, tmp;
	int LIMIT = 49;
	unsigned long int a = 1;
	unsigned long int b = 2;

	printf("%u, %u, ", a, b);
	for (i = 0; i < LIMIT - 1; i++)
	{
		printf("%u, ", a + b);
		tmp = a;
		a = b;
		b = tmp + b;
	}
		printf("%u\n", a + b);

	return (0);
}

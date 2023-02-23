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
	int LIMIT = 50;
	unsigned long long int a = 1;
	long long int b = 2;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < LIMIT - 1; i++)
	{
		printf("%ld, ", a + b);
		tmp = a;
		a = b;
		b = tmp + b;
	}
		printf("%ld\n", a + b);
	
	return (0);
}

 #include <stdio.h>


/**
 * main -  finds and prints the sum of the even-valued terms,
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1;
	int LIMIT = 4000000;
	int b = 2;
	long int sum = 0;

	while (sum < LIMIT)
	{
		if (a % 2  == 0 || b % 2 == 0)
			sum += a + b;
		a = b;
		b = a + b;
	}
		printf("%ld\n", sum);
	return (0);
}

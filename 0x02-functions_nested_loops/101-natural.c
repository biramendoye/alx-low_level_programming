 #include <stdio.h>


/**
 * main - a program that computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 (excluded), followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int LIMIT = 1024;
	int i = 3;
	int sum = 0;

	while (i < LIMIT)
	{
		if (i % 3 == 0 ||  i % 5 == 0)
			sum += i;

		i++;
	}

	printf("%d\n", sum);
	return (0);
}

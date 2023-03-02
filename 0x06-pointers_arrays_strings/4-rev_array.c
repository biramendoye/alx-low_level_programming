#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array of integer
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int j = n - 1;
	int i = 0;
	int tmp;

	if (n == 0)
		return;

	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
		i++;
	}
}

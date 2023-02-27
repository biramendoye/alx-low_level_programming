#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: a poniter to int
 * @b: a poniter to int
 */
void swap_int(int *a, int *b)
{
	int tmp =  *a;
	*a = *b;
	*b = tmp;
}

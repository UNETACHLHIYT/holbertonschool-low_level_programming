#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)

{
	int ind;
	int stck;

	for (ind = 0; ind < n / 2; ind++)
{
		stck = a[ind];
		a[ind] = a[n - 1 - ind];
		a[n - 1 - ind] = stck;
}
}

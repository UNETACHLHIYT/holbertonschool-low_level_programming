#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n
 * @a: array
 * @n: number
 *The numbers displayed in the same order as they are stored in the array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int ptb;

	for (ptb = 0; ptb < n; ptb++)
{
	if (ptb == 0)
{
	printf("%d", a[ptb]);
}

else
{
	printf(", %d", a[ptb]);
}
}
	printf("\n");
}

#include "main.h"
#include <stdio.h>

/**
 * _diagsums - prints the sum of the two diagonals
 * @a:
 * @size:size
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	 int res1 = 0;
	 int res2 = 0;
	 int i;
	 
	 for (i = 0; i < size; i++) 
{

        res1 += a[i * size + i];       
        res2 += a[i * size + (size - 1 - i)];
    }

    printf("%d, %d\n", res1, res2);
}
	

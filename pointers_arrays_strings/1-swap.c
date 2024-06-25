#include "main.h"


/**
 * swap_int - print integers
 *@a:value integ
 *@b:value integ
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int z = *a;

	*a = *b;
	*b = z;
}

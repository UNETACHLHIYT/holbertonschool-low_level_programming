#include "main.h"
#include <stdio.h>

/**
 * my_strncpy -  copies a string
 * @dest: tmp
 * @src: string
 * @n: variable
 *
 * Return: Always 0.
 */
char *my_strncpy(char *dest, const char *src, int n)
{
	int cpo;

	for (cpo = 0; cpo < n && src[cpo] != '\0'; cpo++)
{
	dest[cpo] = src[cpo];
}

	for (; cpo < n; cpo++)
{
	dest[cpo] = '\0';
}
return (dest);
}

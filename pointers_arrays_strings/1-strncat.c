#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: tmp
 * @src:string
 * @n:variable
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dln = 0;
	int c;

	while (dest[dln] != '\0')
		dln++;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[dln + c] = src[c];

	if (c < n)
		dest[dln + c] = '\0';
	return dest;
}

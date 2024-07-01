#include "main.h"
#include <stdio.h>
/**
 * _memcpy - opies memory area.
 * @dest:memory
 * @src: memory
 * @n:byts
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}

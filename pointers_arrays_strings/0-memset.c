#include "main.h"
#include <stdio.h>
/**
 * _memset -  fills memory with a constant byte.
 * @s: string
 * @b:bytes
 * @n:number oct
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}


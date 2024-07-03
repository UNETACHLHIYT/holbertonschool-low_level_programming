#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - string for any of a set of bytes
 * @s:string
 * @accept:matches one of the byte
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
{
	char *a = accept;

	while (*a)
{
	if (*s == *a)
{
	return (s);
}
a++;
s++;
}
return (NULL);
}

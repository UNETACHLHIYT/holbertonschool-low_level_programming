#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character
 * @s:string
 * @c:caractere
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')

{
	if (*s == c)
{
	return (s);
}
s++;
}
return (NULL);
}

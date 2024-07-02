#include "main.h"
#include <stdio.h>

/**
 * _strspn - prefix substring
 * @s:string
 * @accept: a
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cal = 0;
	int tv;
	char *p;

	while (*s)
{
	tv = 0;

	for (p = accept; *p; p++)
{
	if (*s == *p)
{
	tv = 1;
	break;
}
}

	if (tv == 0)
	return (cal);
	cal++;
	s++;
}
return (cal);
}

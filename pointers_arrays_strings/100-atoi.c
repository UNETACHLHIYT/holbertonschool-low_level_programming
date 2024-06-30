#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int result = 0;
	int si = 1;

	while (*s != '\0')
{
	if (*s == '-')
{
	si = -1;
	s++;
	continue;
}

if (*s == '+')
{
	s++;
	continue;
}
if (*s >= '0' && *s <= '9')
{
	result = result * 10 + (*s - '0');
	s++;
}
else
{
	break;
}
}
return (result * si);
}

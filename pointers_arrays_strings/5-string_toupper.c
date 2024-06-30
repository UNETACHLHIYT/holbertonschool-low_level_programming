#include "main.h"
#include <stdio.h>

/**
 * string_toupper - all lowercase letters of a string to uppercase
 * @str:string
 *
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int p = 0;

	while (str[p] != '\0')
{
	if (str[p] >= 'a' && str[p] <= 'z')
{
	str[p] = str[p] - 32;
}

p++;
}

return (str);
}

#include "main.h"
#include <stdio.h>

/**
 * leet -  encodes a string into 1337.
 * @str: string
 *
 * Return: Always 0.
 */
char *leet(char *str)

{
	int p;

	for (p = 0; str[p] != '\0'; p++)
{
	if (str[p] == 'a' || str[p] == 'A')
		str[p] = '4';
	if (str[p] == 'e' || str[p] == 'E')
		str[p] = '3';
	if (str[p] == 'o' || str[p] == 'O')
		str[p] = '0';
	if (str[p] == 't' || str[p] == 'T')
		str[p] = '7';
	if (str[p] == 'l' || str[p] == 'L')
		str[p] = '1';
}
return (str);
}

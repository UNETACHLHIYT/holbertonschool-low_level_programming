#include "main.h"
#include <stdio.h>

/**
 * _strstr - ocates a substring
 * @haystack: string
 * @needle:substring
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	if (needle[0] == '\0')
{
	return (haystack);
}

	for (a = 0; haystack[a] != '\0'; a++)
{

	for (b = 0; haystack[a + b] == needle[b]; b++)
{
	if (needle[b + 1] == '\0')
{
	return (&haystack[a]);
}
}
}
return (NULL);
}

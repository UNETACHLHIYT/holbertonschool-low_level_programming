#include "main.h"


/**
 * _strcpy - copies the string pointed
 * @dest: buffer
 * @src: string
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int f;

	for (f = 0; src[f] != '\0'; f++)
	{
		dest[f] = src[f];
	}

	dest[f] = '\0';
	return (dest);
}

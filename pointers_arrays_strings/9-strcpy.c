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
	char *ptr = dest;

	while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}
	*dest = '\0';

	return ('ptr');
}

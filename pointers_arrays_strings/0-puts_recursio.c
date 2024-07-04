#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 *
 * Return: Always 0.
 */


void _puts_recursion(char *s)
{
	_putchar(*s);
	(*s != '\0') && _puts_recursion(s + 1);
	*s == '\0' && putchar('\n');
}

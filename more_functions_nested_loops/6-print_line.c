#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 *@n: character
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n <= 0)
{
	_putchar('\n');
}

else
{
	while (n > 0)
{
	_putchar('_');
}
	_putchar('\n');
}
}

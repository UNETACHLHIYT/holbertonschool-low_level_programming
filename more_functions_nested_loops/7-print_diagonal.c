#include "main.h"

/**
 * print_diagonal -  draws a diagonal line
 * @n: character
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int d;
	int g;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
{
	for (d = 0; d < n; d++)
		{
	for (g = 0; g < d; g++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
}
}

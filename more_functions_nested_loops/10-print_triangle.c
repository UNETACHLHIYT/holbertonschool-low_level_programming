#include "main.h"

/**
 * print_triangle - triangle
 *@size: character #
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			_putchar(' ');
		}

		for (c = 0; c <= a; c++)
		{
			if (c == a)
				_putchar('#');
			else
				_putchar('#');
		}
		_putchar('\n');
}
}

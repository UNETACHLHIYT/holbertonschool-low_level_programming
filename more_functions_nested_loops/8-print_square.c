#include "main.h"
/**
 * print_square - square followed by a new line
 * @size: # charactere
 */
void print_square(int size)
{
	int s;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (s = 0; s < size; s++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

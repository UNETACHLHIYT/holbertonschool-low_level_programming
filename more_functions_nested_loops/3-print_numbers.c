#include "main.h"
#include <stdio.h>

/**
 * print_numbers - 0-9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}

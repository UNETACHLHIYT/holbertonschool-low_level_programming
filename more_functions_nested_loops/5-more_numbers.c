#include "main.h"
/**
 * more_numbers - 0 14 10times
 * Return: 0
 */

void more_numbers(void)
{
	int n;
	int u;

	for (n = 0; n < 10; n++)
{
	for (u = 0; u <= 14; u++)
{
	if (u > 9)
{
	_putchar('0' + (u / 10));
}
		_putchar('0' + (u % 10));
}
	    _putchar('\n');
}
}

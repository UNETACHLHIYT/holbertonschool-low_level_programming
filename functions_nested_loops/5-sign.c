#include "main.h"
/**
 * print_sign -  sign of a numbe
 * @n:charactere checked
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
	}
	else if  (n == 0)
{
	_putchar('0');
	return (0);
	}

	else
{²
	_putchar('-');
	return (-1);
}

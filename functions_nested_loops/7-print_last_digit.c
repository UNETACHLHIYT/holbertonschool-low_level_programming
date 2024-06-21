#include "main.h"

/**
 * print_last_digit- last number
 *@n: check
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int lastnumber;
if (n < 0)
{
	n = -n;
}
lastnumber = n % 10;
_putchar('0' + lastnumber);
 return (lastnumber);
}

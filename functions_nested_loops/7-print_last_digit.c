#include "main.h"
/**
*print_last_digit- last number
*@n: check
* Return: Always 0.
*/
int print_last_digit(int n)
{
int lastnumber;
lastnumber = n % 10;

	if (n < 0)
{
	lastnumber = -lastnumber;
}

	_putchar('0' + lastnumber);
	return (lastnumber);
}

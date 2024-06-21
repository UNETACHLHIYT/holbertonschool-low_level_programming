#include "main.h"
/**
 * times_table - 9 times table
 * @num @result: print checked
 * Return: 0
 */
void times_table(void)
{
	int num;
	int result;

	for (num = 0; num <= 9; num++)
{
	for (result = 0; result <= 9; result++)
{
	if (result != 0)
	{
	_putchar(',');
	_putchar(' ');
}

if (num * result < 10)
{
	_putchar(' ');
}

if (num * result < 10)
{
	_putchar(' ');
}
	else
{
		_putchar('0' + num * result / 10);
	}
	_putchar('0' + num * result % 10);
	}
	_putchar('\n');
}
}

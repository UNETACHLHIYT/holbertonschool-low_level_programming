#include "main.h"

/**
 * puts_half - print the second half of the string
 *@str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int l  = 0;
	int pdepar;
	int imp;

	while (str[l] != '\0')
{
		l++;
}

if (l % 2 == 0)
{
	pdepar = l / 2;
}
else
{
	pdepar = (l - 1) / 2 + 1;
}

for (imp = pdepar; imp < l; imp++)
{
	_putchar(str[imp]);
}
	_putchar('\n');
}

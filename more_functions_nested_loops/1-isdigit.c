#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for a digit
 * @c: 0-9
 *Return: Always 0.
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

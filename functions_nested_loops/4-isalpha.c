#include "main.h"
/**
 * _isalpha - check alphacharacter is low or upper
 * @c:charactere checked
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
}
return (0);
}

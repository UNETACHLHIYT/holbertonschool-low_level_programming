#include "main.h"
/**
 * _islower - check character is low 0 1
 * @c:charactere checked
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

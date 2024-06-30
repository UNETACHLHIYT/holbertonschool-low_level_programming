#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 *@str: string
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i = 0;
	int next = 1;

	while (str[i] != '\0')
{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
{
		next = 1;
}

else if (next)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
}
next = 0;
}
i++;
}
return (str);
}

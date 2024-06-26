#include "main.h"


/**
 * rev_string - reverses a string
 * @s: string
 *Return: Always 0.
 */
void rev_string(char *s)
{
	int t;
	int i;
	int n;

for (t = 0; s[t] != '\0'; t++)
{

}

for (i = 0; i < t / 2; i++)
{
	n = s[i];
	s[i] = s[t - 1 - i];
	s[t - 1 - i] = n;
}

}


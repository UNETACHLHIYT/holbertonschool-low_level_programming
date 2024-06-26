
#include "main.h"
#include <stdio.h>

/**
 * rev_string - everses a string
 * @s: ptr str
 * Return: Always 0.
 */
rev_string(char *s)
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

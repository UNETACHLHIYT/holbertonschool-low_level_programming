#include "main.h"
#include <stdio.h>

/**
 * leet -  encodes a string into 1337.
 * @str: string
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i, j;
    char letters[] = "aAeEoOtTlL";
    char leet_chars[] = "4433007711";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == letters[j])
            {
                str[i] = leet_chars[j];
                break;
            }
        }
    }

    return str;
}

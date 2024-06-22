#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: charactere
 * Return: Always 0.
 */

void print_to_98(int n)
{
   int num;

    while (n != 98)
    {
        num = n;
        if (num < 0)
        {
            _putchar('-');
            num = -num;
        }

        if (num >= 10)
        {
            if (num >= 100)
            {
                _putchar((num / 100) + '0');
                num = num % 100;
            }
            _putchar((num / 10) + '0');
        }
        _putchar((num % 10) + '0');

        if (n != 98)
        {
            _putchar(',');
            _putchar(' ');
        }

        if (n < 98)
            n++;
        else
            n--;
    }

    _putchar('9');
    _putchar('8');
    _putchar('\n');
}

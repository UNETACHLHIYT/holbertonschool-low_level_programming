#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: charactere
 * Return: Always 0.
 */

void print_to_98(int n)
{
 if (n <= 98)
    {
        while (n <= 98)
        {
            _putchar((n / 10) + '0');
            _putchar((n % 10) + '0');
            
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (n == 98)
                break;
            
            if (n < 98)
                n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            _putchar((n / 10) + '0');
            _putchar((n % 10) + '0');
            
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (n == 98)
                break;
            
            if (n > 98)
                n--;
        }
    }
    _putchar('\n');
}

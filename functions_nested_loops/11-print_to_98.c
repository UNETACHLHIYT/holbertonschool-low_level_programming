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
            if (n < 0)
            {
                _putchar('-');
                _putchar((n * -1) + '0');
            }
            else
            {
                _putchar((n % 10) + '0');
                if (n >= 10)
                    _putchar((n / 10) + '0');
            }

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }

            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            if (n < 0)
            {
                _putchar('-');
                _putchar((n * -1) + '0');
            }
            else
            {
                _putchar((n % 10) + '0');
                if (n >= 10)
                    _putchar((n / 10) + '0');
            }

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }

            n--;
        }
    }
    _putchar('\n');
}

#include "main.h"
/**
 * times_table - 9 times table
 * @num1 @num2 @result @final1 @final2: print checked
 * Return: 0
 */
void times_table(void)
{
int num1;
int num2;
int result;
int final1;
int final2;
for (num1 = 0; num1 <= 9; num1++)
{
	for (num2 = 0; num2 <= 9; num2++)
	{
		result = num1 * num2
			if (result > 9)
			{
				final1 = result % 10;
				final2 = result / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(final2 + '0');
				_putchar(final1 + '0');
			} else
			{
				if (num2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
	}
				_putchar(result + '0');
	}
	}
		_putchar('\n');
}
}

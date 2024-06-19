#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints numbers wiith single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)

	{
		putchar(numbers + '0');
		if (numbers < 9)
		{
		putchar(',');
		putchar(32);
		}
}

putchar('\n');
return (0);
}

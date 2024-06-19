#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints numbers with single-digit numbers
 * Return: 0
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar(numbers + '0');
		putchar(',');
}
putchar('\n');
return (0);
}

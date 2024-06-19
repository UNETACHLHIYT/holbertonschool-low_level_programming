#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints numbers from 0 to 10 without char
 * Return: 0
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 11; numbers++)
	{
		putchar("%d", numbers);
	}
	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints numbers from 0 to 10 without char
 * Return: 0
 */
int main(void)
{
	int n;
	int alphabet;

	for (n = 0; n <= 9; n++)

{
	putchar(n + '0');
}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
{
	putchar(alphabet);
}
	putchar('\n');
	return (0);
}

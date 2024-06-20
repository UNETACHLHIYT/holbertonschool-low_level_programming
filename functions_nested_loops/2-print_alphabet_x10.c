#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercas x 10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char print_alphabet10;
	int printalph;

	for (printalph = 0; printalph < 10; printalph++)

{
	for (print_alphabet10 = 'a'; print_alphabet10 <= 'z'; print_alphabet10++)

	{
		_putchar(print_alphabet10);
}

	_putchar('\n');
}
}

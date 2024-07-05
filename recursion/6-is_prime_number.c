#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - prime number
 * @n: number
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_numberbis(n, 2));
}

/**
 * is_prime_numberbis - verification div number
 * @n: number
 * @i: div
 *
 * Return: Always 0
 */
int is_prime_numberbis(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_numberbis(n, i + 1));
}



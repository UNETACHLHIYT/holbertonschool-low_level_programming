#include "main.h"
#include <stdio.h>

/**
 *  _sqrt_recursion - print square
 *  @n:number
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (_sqrt_recursionbis(n, 0, n));
}
/**
 * _sqrt_recursionbis - search square
 * @n: numbre
 * @dep: dÃp
 * @fin: fin
 *
 * Return: Always 0.
 */
int _sqrt_recursionbis(int n, int dep, int fin)
{
int vcar = (dep + fin) / 2;
int vst = vcar * vcar;

if (dep > fin)
{
return (-1);
}
if (vst == n)
{
return (vcar);
{
else if (vst > n)
{
return (_sqrt_recursionbis(n, dep, vcar - 1));
}
else
{
return (_sqrt_recursionbis(n, vcar + 1, fin));
}
}
}
}


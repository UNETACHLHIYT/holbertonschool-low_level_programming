#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: nmbr arg
 * @argv: vec arv
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int v;

	for (v = 0; v < argc; v++)
{
	printf("%s\n", argv[v]);
}
return (0);
}

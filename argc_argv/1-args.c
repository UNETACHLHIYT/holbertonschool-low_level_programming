#include <stdio.h>

/**
 * main - arguments passed
 * @argc: nmber arg
 * @argv: vec arv
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

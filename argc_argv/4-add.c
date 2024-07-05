#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @i:compteur bou
 * @res:result
 * @num: number
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc <= 1)
{
	printf("0\n");
	return (0);
}
int res = 0;
int i, j;
int num;

for (i = 1; i < argc; ++i)
{

	for (j = 0; argv[i][j] != '\0'; ++j)
{
	if (argv[i][j] < '0' || argv[i][j] > '9')
{
	printf("Erreur\n");
	return (1);
}
}
num = atoi(argv[i]);

if (num <= 0)
{
	printf("Erreur\n");
	return (1);
}
res += num;
}
printf("%d\n", res);
return (0);
}

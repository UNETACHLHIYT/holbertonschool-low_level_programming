#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @i:compteur bou
 * @res:result
 * @num: number
 * Return: Always 0
 */
#include <stdio.h>
#include <stdlib.h>

int positivenumber(char *str)
{
	int i = 0;
	while (str[i])
{
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    int sum = 0;
    int num;
    int i;

    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        if (positivenumber(argv[i]))
        {
            printf("Error\n");
            return 1;
        }
        num = atoi(argv[i]);
        sum += num;
    }

    printf("%d\n", sum);
    return 0;
}

#include <stdio.h>
/**
 * main - print number
 * Return: 0 Alawyas
 */
int main(void)
{
	int fizz;

	for (fizz = 1; fizz <= 100; fizz++)
	{
		if (fizz % 3 == 0 && fizz % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (fizz % 3 == 0)
		{
			printf("Fizz");
		}

		else if (fizz % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", fizz);
		}
		if (fizz < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

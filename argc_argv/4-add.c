#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int i, sum = 0;
	
	if (argc <= 1)
{
	printf("0\n");
	return (0);
}

for (i = 1; i < argc; i++)
{
	int j = 0;
        
  while (argv[i][j] != '\0')
        {
            
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Erreur\n");
                return (1);
            }
            j++;
        }

        int num = atoi(argv[i]);
        if (num == 0 && argv[i][0] != '0')
        {
            printf("Erreur\n");
            return (1);
        }
        sum += num;
    }

    
    printf("%d\n", sum);

    return (0);
}

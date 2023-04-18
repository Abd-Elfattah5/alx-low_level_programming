#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *main - program to print numbers addition
  *Return: (0) if success, (1) if false.
  *@argc: number of arguments the program have
  *@argv: array of pointer to the strings of the arguments
  */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		int i;
		long unsigned int j;

		for (i = 1; i < argc; i++)
		{
			for(j = 0; j < strlen(argv[i]); j++)
			{
				if (!(argv[i][j] > 47 && argv[i][j] < 58))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

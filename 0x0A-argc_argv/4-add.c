#include <stdio.h>
#include <stdlib.h>

/**
  *main - program to print numbers addition
  *Return: (0) if success, (1) if false.
  *@argc: number of arguments the program have
  *@argv: array of pointer to the strings of the arguments
  */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("0\n");
	else
	{
		int i;
		int sum = 0;

		for (i = 1; i < argc; i++)
			if ((argv[i])[0] > 47 && (argv[i])[0] < 58)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		printf("%d\n", sum);
	}
	return (0);
}

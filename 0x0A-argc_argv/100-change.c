#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *main - program to print minimum number of coins to make change
  *Return: (0) if success, (1) if false.
  *@argc: number of arguments the program have
  *@argv: array of pointer to the strings of the arguments
  */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", sum);
	}
	else
	{
		int cents = atoi(argv[1]);

		while (cents != 0)
		{
			if (cents >= 25)
			{
				cents -= 25;
				sum += 1;
			}
			else if (cents >= 10)
			{
				cents -= 10;
				sum += 1;
			}
			else if (cents >= 5)
			{
				cents -= 5;
				sum += 1;
			}
			else if (cents >= 2)
			{
				cents -= 2;
				sum += 1;
			}
			else
			{
				cents -= 1;
				sum += 1;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

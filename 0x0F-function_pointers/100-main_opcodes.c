#include <stdlib.h>
#include <stdio.h>

/**
  *main - programe to print the opcode of itself
  *Return: always (0) success
  *@argc: number of arguments compileld
  *@argv: array of pointers to the arguments
  */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		 int N_bytes, i, (*f)(int, char **);
		 unsigned char code;

		 N_bytes = atoi(argv[1]);
		 f = main;

		if ((N_bytes) >= 0)
		{
			for (i = 0; i < N_bytes; i++)
			{
				code = *(unsigned char *)f;
				printf("%.2x", code);
				if (i == N_bytes - 1)
					break;
				printf(" ");
				f++;
			}
		}
		else
		{
			printf("Error\n");
			exit(2);
		}
	}
	else
	{
		printf("Error");
		exit(1);
	}
	printf("\n");
	return (0);
}

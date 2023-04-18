#include <stdio.h>
#include <stdlib.h>

/**
  *main - program to print two numbers multiplication
  *Return: always (0) success
  *@argc: number of arguments the program have
  *@argv: array of pointer to the strings of the arguments
  */
int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

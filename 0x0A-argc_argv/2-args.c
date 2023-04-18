#include <stdio.h>
#include <stdlib.h>

/**
  *main - program to print arguments it had
  *Return: always (0) success
  *@argc: number of arguments the program have
  *@argv: array of pointer to the strings of the arguments
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

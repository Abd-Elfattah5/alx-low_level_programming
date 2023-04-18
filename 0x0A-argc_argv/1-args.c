#include <stdio.h>
#include <stdlib.h>

/**
  *main - program to print how many arguments it had
  *Return: always (0) success
  *@argc: number of arguments the program have
  *@argv: array of pointer to the strings of the arguments
  */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

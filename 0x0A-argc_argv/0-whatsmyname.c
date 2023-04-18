#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program to print it's name
  * Return: always (0) success
  *@argc: number of arguments in the progrma
  *@argv: array of pointers holding the strings of the arguments
  */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

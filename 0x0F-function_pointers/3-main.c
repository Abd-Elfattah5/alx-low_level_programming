#include "3-calc.h"
/**
  *main - a program to do some basic arithmetic operations
  *Return: always (0) success
  *@argc: number of arguments in compiling
  *@argv: array of pointers to the arguments
  */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	printf("%d\n", f(num1, num2));
	return (0);

}

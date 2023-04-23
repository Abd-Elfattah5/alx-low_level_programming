#include "3-calc.h"
/**
  *main - a program to do some basic arithmetic operations
  *Return: always (0) success
  *@argc: number of arguments in compiling
  *@argv: array of pointers to the arguments
  */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int n1, n2, (*f)(int, int);

		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		f = get_op_func(argv[2]);
		if (f == NULL || (argv[2][1] != '\0'))
		{
			printf("Error\n");
			exit(99);
		}
		else if ((*argv[2] == '/' || *argv[2] == '%') && n2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", f(n1, n2));
		return (0);
	}
	printf("Error\n");
	exit(98);


}

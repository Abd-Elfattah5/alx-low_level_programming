#include "main.h"

/**
  *print_diagonal - function to print a diagonal
  *Return: always 0 (success)
  *@n: number of rows in the diagonal
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j != i-1)
				_putchar(' ');
			else
				_putchar('\\');
		}
		_putchar('\n');
	}
	return;
	}
	_putchar('\n');
}

#include "main.h"
/**
  *print_line - function to print a straight line
  *Return: always 0 (success)
  *@n: is the number of characters to print
  */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

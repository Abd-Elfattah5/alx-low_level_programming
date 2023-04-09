#include "main.h"

/**
  *print_rev - function to print string in revers
  *Return: always 0 (success)
  *@s: a pointer to the string to print
  */
void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	j--;

	while (j != -1)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}

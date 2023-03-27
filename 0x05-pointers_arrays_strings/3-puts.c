#include "main.h"

/**
  *_puts - function to print to the stdout
  *Return: always 0 (success)
  *@str: a pointer to a string
  */
void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

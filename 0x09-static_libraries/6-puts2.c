#include "main.h"

/**
  *puts2 - function to print to the stdout
  *Return: always 0 (success)
  *@str: a pointer to a string
  */
void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

#include "main.h"
/**
  *puts_half - function to print half of the characters
  *Return: always 0 (success)
  *@str: a pointer to the string
  */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i++;

	i--;

	if (i % 2 != 0)
		n = (i - 1) / 2;
	else
		n = i / 2;

	for (n = n+1; n <= i; n++)
		_putchar(str[n]);
	_putchar('\n');
}

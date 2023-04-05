#include "main.h"

/**
  *_puts_recursion - function to print a statment recursivly
  *
  *@s: is a string or a pointer to an array of chars
  */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

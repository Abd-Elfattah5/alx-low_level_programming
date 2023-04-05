#include "main.h"

/**
  *_print_rev_recursion - function to print a statment in reverse
  *@s: a pointer to the start of the text or and array of chars
  */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(s[0]);
}

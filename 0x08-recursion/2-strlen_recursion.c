#include "main.h"

/**
  *_strlen_recursion - funtion to return the string length in recursive use
  *Return: it returns the recursive funtion plus 1 untin reaching the basecase
  *@s: a pointer to the array of chars
  */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}

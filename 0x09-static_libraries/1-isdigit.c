#include "main.h"

/**
  *_isdigit - function to check if the character is a digit
  *Return: 1 if it is a digit
  * 0 otherwise
  *@c: the character to be checked
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}

#include "main.h"
/**
  * _isalpha - check if the character is alphabet
  * Return: 1 if alpha
  * 0 otherwise
  * @c: is the character to be checked
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

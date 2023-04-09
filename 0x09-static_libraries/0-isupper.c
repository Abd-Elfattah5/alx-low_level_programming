#include "main.h"

/**
  * _isupper - function to check the letter case
  *Return: return 1 if letter is upper case
  * 0 otherwise
  * @c: is the letter ascii to be checked
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

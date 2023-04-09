#include "main.h"
/**
  *_islower - function to check if a character is lowercase
  *Return: 1 if character is lowercase
  * 0 otherwise
  * @c: is the character to check
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
  *_pow_recursion - function to calculate the power recursivly
  *Return: the next function call untill it reaches 1
  *@x: the number base
  *@y: the number power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (_pow_recursion(x, y - 1) * x);
}

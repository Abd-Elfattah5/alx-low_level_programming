#include "main.h"

/**
  *factorial - function to calculate the factorial of certain number
  *Return: the recursive factorial number untin it reaches zero
  *@n: the number to be calculated
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);
}

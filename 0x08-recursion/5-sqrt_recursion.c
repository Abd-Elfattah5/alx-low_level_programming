#include "main.h"

/**
  *calc_sqrt - function to find a sqrt
  *Return: the sqrt of the number
  *@n: the number to find its sqrt
  *@sqrt: the sqrt of the number
  */
int calc_sqrt(int n, int sqrt)
{
	if (sqrt * sqrt > n)
		return (-1);
	else if (sqrt * sqrt == n)
		return (sqrt);
	else
		return (calc_sqrt(n, sqrt + 1));
}

/**
  *_sqrt_recursion - function to find the sqrt of a number
  *Return: the sqrt of a number if existed else return -1
  *@n: the number to find its sqrt
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (calc_sqrt(n, 0));
}

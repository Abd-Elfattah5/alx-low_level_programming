#include "main.h"
/**
  * print_sign - function to show numbers sign
  * Return: 1 if the number is positive
  * 0 if the number is 0
  * -1 if the number is negative
  * @n: is the number we check
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

#include "main.h"
/**
  * print_last_digit - function to print the last digit of a number
  * Return: the last digit of the number
  * @i: the number to be returned
  */
int print_last_digit(int i)
{
	int tmp;

	tmp = _abs(i % 10);

	_putchar((i % 10) + '0');
	return (i % 10);
}

#include "main.h"
/**
  * print_last_digit - function to print the last digit of a number
  * Return: the last digit of the number
  * @i: the number to be returned
  */
int print_last_digit(int i)
{
	if (i < 0)
		i /= -1;

	_putchar((i % 10) + '0');
	return (i % 10);
}

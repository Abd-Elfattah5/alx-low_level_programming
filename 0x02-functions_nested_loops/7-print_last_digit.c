#include "main.h"
/**
  * print_last_digit - function to print the last digit of a number
  * Return: the last digit of the number
  * @i: the number to be returned
  */
int print_last_digit(int i)
{	int tmp;

	tmp = i % 10;

	if (tmp < 0)
		tmp /= -1;
	_putchar(tmp + '0');
	return (tmp);
}

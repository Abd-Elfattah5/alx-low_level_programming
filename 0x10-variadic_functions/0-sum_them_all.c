#include "variadic_functions.h"

/**
  *sum_them_all - function to sum variabale number of integers
  *Return: the sum of the integers, (0) if false
  *@n: the number of integers to sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list LP;
	int sum = 0;

	if (n <= 0)
		return (0);

	va_start(LP, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(LP, int);
	}
	va_end(LP);
	return (sum);
}

#include "variadic_functions.h"

/**
  *print_numbers - function to print variable number of integers
  *Return: always (0) success
  *@separator: a char to be printed between numbers
  *@n: number of integers to be printed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list LP;
	int temp;

	va_start(LP, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(LP, int);

		printf("%d", temp);

		if (i == n - 1)
			break;
		else if (!(*separator == NULL || *separator == 0))
			printf("%s", separator);
	}
	printf("\n");
}

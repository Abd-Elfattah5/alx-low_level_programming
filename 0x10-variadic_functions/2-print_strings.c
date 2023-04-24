#include "variadic_functions.h"

/**
  *print_strings - function to print a variable number of strings
  *Return: always (0) success
  *@separator: a char to seperate between strings
  *@n: number of strings to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list LP;
	char *temp;

	va_start(LP, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(LP, char *);

		if (temp == NULL || temp == 0)
			temp = "(nil)";
		printf("%s", temp);
		if (i == n - 1)
			break;
		if (!(separator == NULL || separator == 0))
			printf("%s", separator);
	}
	printf("\n");
}

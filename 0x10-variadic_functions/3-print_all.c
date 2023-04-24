#include "variadic_functions.h"

/**
  *print_all - function to print basic types
  *Return: always (0) success
  *@format: a string dedicating the format to be printed
  */
void print_all(const char * const format, ...)
{
	int i = 0, n = 0;
	va_list LP;
	char *sep = ", ", *temp;

	va_start(LP, format);

	while (!(format[n] == '\0'))
		n++;

	while (i < n)
	{
		if (i == n - 1)
			sep = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(LP, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(LP, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(LP, double), sep);
				break;
			case 's':
				temp = va_arg(LP, char *);
				if (temp == NULL)
					temp = "(nil)";
				printf("%s%s", temp, sep);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(LP);
}

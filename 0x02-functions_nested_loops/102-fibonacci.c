#include "main.h"
#include <stdio.h>
/**
 * main - program to print the first 50 numbers of fibonacci
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i = 0;
	unsigned long fib1 = 0, fib2 = 1, sum;

	printf("1");
	printf(", 2");
	while (i != 50)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
		i++;
	}
	return (0);
}

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
	unsigned long fib1 = 0, fib2 = 1, sum = 0, total = 0;

	while (sum <= 4000000)
	{
		sum = fib1 + fib2;

		fib1 = fib2;
		fib2 = sum;

		if (sum % 2 == 0)
			total += sum;
	}
	printf("%lu\n", total);
	return (0);
}

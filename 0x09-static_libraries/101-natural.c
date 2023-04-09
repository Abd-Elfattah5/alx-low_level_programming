#include "main.h"
#include <stdio.h>
/**
 * main - program to print the multipliers of 3 and 5
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 1; i < 1025; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d\n", sum);
	return (0);
}

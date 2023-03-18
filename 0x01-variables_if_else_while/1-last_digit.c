#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - function to get the last digit of a number and define it
  *Return: always 0 (success)
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	printf("last digit of %d is %d ", n, ld);
	if (ld > 5)
		printf("and is greater than 5\n");
	else if (ld == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}

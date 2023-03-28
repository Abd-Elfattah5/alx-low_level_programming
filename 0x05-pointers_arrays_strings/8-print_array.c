#include "main.h"
#include <stdio.h>
/**
  *print_array - function to print number of array elements
  *return: always 0 (success)
  *@a: pointer to the array head
  *@n: number of elements to be printed
  */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		printf("%d", a[0]);
		for (i = 1; i < n; i++)
			printf(", %d", a[i]);
		printf("\n");
	}
}

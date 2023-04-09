#include "main.h"

/**
  *swap_int - function to swap two variables
  *Return: always 0 (success)
  *@a: first variable to return
  *@b: second variable to return
  */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

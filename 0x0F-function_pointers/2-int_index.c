#include "function_pointers.h"

/**
  *int_index - function to return the index of the desired number
  *Return: the index of the number or -1 otherwise
  *@array: pointer to the start of the array
  *@size: number of elements in the array
  *@cmp: pointer to the function used
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}

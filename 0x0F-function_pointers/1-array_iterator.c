#include "function_pointers.h"
/**
  *array_iterator - function to print number with function pointers
  *Return: void
  *@array: is a pointer to an array
  *@size: the size of the array
  *@action: is a pointer to a function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

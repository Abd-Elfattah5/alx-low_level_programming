#include "main.h"

/**
  *set_bit - set the value of a single bit
  *Return: 1 if success or 0 otherwise
  *@n: the number used
  *@index: the index of the bit
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n ^= (1 << index);

	return (1);
}

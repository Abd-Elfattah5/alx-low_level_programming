#include "main.h"

/**
  *clear_bit - set the value of a single bit to 0
  *Return: 1 if success or -1 otherwise
  *@n: the number used
  *@index: the index of the bit
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);

	return (1);
}

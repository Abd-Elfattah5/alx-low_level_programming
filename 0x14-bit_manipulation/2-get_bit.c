#include "main.h"

/**
  *get_bit - function to get the binary bit at and index
  *Return: the bit value
  *@n: the number
  *@index: the index of the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n & (1 << index) ? 1 : 0);
}

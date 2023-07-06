#include "main.h"

/**
  *flip_bits - function to know the difference bits between two nums
  *Return: the number of different bits
  *@n: first num
  *@m: second num
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, msk = m ^ n;

	while (msk > 0)
	{
		i += msk & 1;
		msk = msk >> 1;
	}
	return (i);
}

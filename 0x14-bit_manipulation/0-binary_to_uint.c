#include "main.h"

/**
  * binary_to_uint - turn a binary to unsigned integer
  * Return : the number after conversion or (0) if failed
  * @b: the binary number to convert
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1, num = 0;
	const char *temp;

	if (b == NULL)
		return (0);
	temp = b;

	while (*temp != '\0')
		temp++;

	temp--;

	while (temp != b - 1)
	{
		if (*temp != '0' && *temp != '1')
			return (0);
		else
		{
			num += (i * ((*temp) - '0'));
			i = i << 1;
		}
		temp--;
	}
	
	return (num);
}

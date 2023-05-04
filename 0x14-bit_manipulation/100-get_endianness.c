#include "main.h"

/**
  * get_endianness - get the machine way of endianness
  * Return: 0 if little endian or 1 if big endian
  */
int get_endianness(void)
{
	unsigned int x = 1;
	char *temp = (char*) &x;

	return ((int) *temp);
}

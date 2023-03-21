#include "main.h"
/**
  *jack_bauer - function to print all day minutes
  *Return: always 0 (success)
  */
void jack_bauer(void)
{	int i;
	int j;
	int k;
	int o;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			for (k = 0; k < 6; k++)
				for (o = 0; o < 10; o++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(o + '0');
				}
}

#include "main.h"
/**
  *print_alphabet - Prints the alphabet in lowercase.
  *Return: always 0 (success)
 */
void print_alphabet(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
	}
}

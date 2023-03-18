#include<stdio.h>
/**
  *main - Entry pint
  *Return: always 1 (success)
  *this is a function to print using putchar function
  */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; i < sizeof(quote) / sizeof(char) ; i++)
		putchar(quote[i]);
	putchar('\n');
	return (1);
}

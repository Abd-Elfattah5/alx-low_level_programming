#include <stdio.h>
/**
  *main - entry point
  *Return: always 0 (success)
  */
int main(void)
{
	int i;
	char word[] = "_putchar\n";

	for (i = 0; i < 9; i++)
	{
		putchar(word[i]);
	}
	return (0);
}

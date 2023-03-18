#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - funtion to print digits combinations
 *Return: always 0 (success)
 */
int main(void)
{	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
		putchar(i + 48);
		putchar(j + 48);
		if (!(i == 8 && j == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}

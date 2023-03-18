#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - funtion to print chars
 *Return: always 0 (success)
 */
int main(void)
{	int i;
	for (i = 97; i < 123 ; i++)
	{
		char ch;

		ch = i;
		if (i != 101 && i != 113)
			putchar(ch);
	}
	putchar('\n');
	return (0);
}

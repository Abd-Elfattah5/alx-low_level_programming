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
	for (i = 122; i > 96 ; i--)
	{
		char ch;

		ch = i;

		putchar(ch);
	}
	putchar('\n');
	return (0);
}

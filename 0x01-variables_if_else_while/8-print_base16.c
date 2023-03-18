#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - funtion to print digits
 *Return: always 0 (success)
 */
int main(void)
{	int i;
	for (i = 0; i < 10 ; i++)
		putchar(i + 48);
	for (i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

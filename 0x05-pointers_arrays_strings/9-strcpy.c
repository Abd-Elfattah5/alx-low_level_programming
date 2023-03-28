#include "main.h"

/**
  *_strcpy - function to copy a string
  *Return: a pointer to the string
  *@dest: a pointer to the destination copy
  *@src: a pointer to the source copy
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
		i++;
	i--;

	dest[i] = src[i];

	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

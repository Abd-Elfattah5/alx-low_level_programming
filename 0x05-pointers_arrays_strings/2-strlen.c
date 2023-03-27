#include "main.h"

/**
  *_strlen - a function to return a string lenght
  *Return: the length of the string sent as a parameter
  *@s: a pointer to the string requierd
  */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

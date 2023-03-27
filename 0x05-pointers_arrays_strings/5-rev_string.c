#include "main.h"

/**
  *rev_string - function to revers a string
  *Return: always 0 (success)
  *@s: a pointer to the string
  */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[i] != '\0')
		i++;
	i--;
	while (i - j != 0 && i - j != 1)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
		i--;
	}
	if (i - j == 1)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}

}

#include "main.h"

/**
  *get_size - function to get strings size
  *Return: the size of the string
  *@s: the pointer to the start of the string
  *@i: the size of the string
  */
int get_size(char *s, int *i)
{
	if (s[0] != '\0')
	{
		*i += 1;
		get_size(s + 1, i);
	}
	else
	{
		return (*i);
	}
	return (*i);
}

/**
  *find_palindrome - function to find wether a string is palindrome or not
  *Return: 1 if the string is palindrom and 0 otherwise4
  *@s: a pointer to the char being checked
  *@j: an index to the char in the start of the string
  *@i: an index to the char in the opposit side being chacked
  *@mid: the mid index of the string
  */
int find_palindrome(char *s, int *j, int *i, int *mid)
{
	if (*i == 0)
		return (1);
	else if (s[*j] == s[*i - 1] && *i > *mid)
	{
		*i -= 1;
		*j += 1;
		return (find_palindrome(s, j, i, mid));
	}
	else if (s[*j] == s[*i - 1] && *i >= *mid)
	{
		return (1);
	}
	else if (s[*j] != s[*i - 1])
		return (0);
	return (1);
}

/**
  *is_palindrome - function to check wether a string is palindrome
  *Return: 1 if the string is palindrome , 0 otherwise
  *@s: a pointer to the start of the string
  */
int is_palindrome(char *s)
{
	int i, mid, j;

	i = 0;
	mid = 0;
	j = 0;

	i = get_size(s, &i);
	mid = i / 2;

	return (find_palindrome(s, &j, &i, &mid));
}

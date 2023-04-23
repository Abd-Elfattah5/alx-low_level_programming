#include "function_pointers.h"

/**
  *print_name - function that excutes another function as it takes it as parameter
  *Return: void
  *@name: a pointer to string
  *@f: a pointer to function
  */
void print_name(char *name, void (*f)(char *))
{
	f (name);
	return;
}

#include "main.h"
/**
  * _abs - function to give the absoulute value of a number
  * Return: the absoulute value of the number
  * @i: is the number we check
  */
int _abs(int i)
{
	if (i < 0)
		return (i / -1);
	else
		return (i);
}

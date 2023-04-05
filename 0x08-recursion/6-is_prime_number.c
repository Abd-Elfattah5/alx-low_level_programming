#include "main.h"
/**
  *calc_prime - function to search if the number has any factors
  *Return: 1 if the number is prime 0 otherwise
  *@n: the number to be checked
  *@fac: the factor of the number
  */
int calc_prime(int n, int fac)
{
	if (fac > n / 2)
		return (1);
	else if (n % fac == 0)
		return (0);
	else
		return (calc_prime(n, fac + 1));
}

/**
  *is_prime_number - funcion to check if a number is prime
  *@n: number to be checked
  */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (calc_prime(n, 2));
}


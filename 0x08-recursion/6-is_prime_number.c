#include "main.h"

int actual_is_prime_number(int n, int i);

/**
  * is_prime_number - checks if the integer is a prime number
  * @n: input parameter
  *
  * Return: 1 if n is a prime number otherwise return 0
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_is_prime_number(n, n - 1));
}

/**
  * actual_is_prime_number - recurses to check for a prime number
  * @i: iterator
  * @n: number that is checked
  *
  * Return: the resulting square root
  */

int actual_is_prime_number(int n, int i)
{

	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
		return (0);

	return (actual_is_prime_number(n, i - 1));
}

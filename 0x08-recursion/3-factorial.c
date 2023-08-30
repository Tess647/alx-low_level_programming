#include "main.h"

/**
  * factorial - function that returns the factorial of a given number
  * @n: integer n
  *
  * Return: -1 if n is negative otherwise return n
  */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (0);

	return (n * factorial(n - 1));
}

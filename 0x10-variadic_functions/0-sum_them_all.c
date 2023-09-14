#include "variadic_functions.h"

/**
  * sum_them_all - function that returns the sum of all its parameters
  * @n: variadic input parameter
  *
  * Return: sum if successful otherwise 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);  /* Initialize the argument list. */

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);   /* Get the next argument value. */

	va_end(ap);

	return (sum);
}

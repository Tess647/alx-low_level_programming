#include <stdio.h>

/**
  * main- Entry point of the program
  * This program prints the largest prime factor of
  * the number 612852475143;
  * Return: Always 0 (Successful)
  */

int main(void)
{
	long int i;
	long int n = 612852475143;

	for (i = 2; (i * i) <= n; i++)
	{
		if ((n % i) == 0)
		{
			n /= i;
			i = 1;
		}
	}
	printf("%ld\n", n);
	return (0);
}

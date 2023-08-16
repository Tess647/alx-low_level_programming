#include <stdio.h>

/**
  * main - Entry point of the program
  *
  * This program prints the firt 98 fibonacci numbers
  * Return: Always 0 (Succesful)
  */

int main(void)
{
	int n = 98;
	unsigned long long fib1 = 0;
	unsigned long long fib2 = 1;
	
	printf("%llu, %llu, ", fib1, fib2);

	for (int i = 2; i < n; i++)
	{
		unsigned long long fibNext = fib1 + fib2;
		if (i == 98)
		{
			printf("%llu", fibNext);
		}
		else
		{
			printf("%llu, ", fibNext);
		}
		fib1 = fib2;
		fib2 = fibNext;
	}
	return (0);
}

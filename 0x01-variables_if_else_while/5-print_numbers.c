#include <stdio.h>

/**
  * main - Entry point of the program
  *
  * This program prints all the single digit numbers
  * Return: Always 0 (Successful)
  */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i++);
	}
	printf("\n");
	return (0);
}

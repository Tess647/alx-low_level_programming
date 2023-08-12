#include <stdio.h>

/**
  * main - Entry point of the pogram
  *
  * This program prints all the single digit numbers
  * separated by a comma
  * Return: Always 0(Successful)
  */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

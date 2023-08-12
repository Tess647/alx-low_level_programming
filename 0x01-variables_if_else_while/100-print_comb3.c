#include <stdio.h>

/**
  * main - Entry point
  *
  * program prints 2 combination digits
  * Return: Always 0 (success)
  */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = i;

		while (j <= 9)
		{
			if (i == j)
			{
				j++;
				continue;
			}
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
				j++;
				continue;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}


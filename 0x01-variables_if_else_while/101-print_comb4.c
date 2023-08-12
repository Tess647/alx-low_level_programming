#include <stdio.h>

/**
  * main- Entry point of the program
  *
  * This program prints all the possible combination of 3 digits
  * Return: Always 0 (Successful)
  */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = i;

		while (j <= 9)
		{
			int k = j;

			while (k <= 9)
			{
				if (i == j || j == k || i == k)
				{
					k++;
					continue;
				}
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
				{
					k++;
					continue;
				}
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}


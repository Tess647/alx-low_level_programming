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

	while (i <= 98)
	{
		int j = i;

		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
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


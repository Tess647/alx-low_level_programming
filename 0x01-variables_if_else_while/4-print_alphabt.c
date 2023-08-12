#include <stdio.h>

/**
  * main - Entry point of the program
  *
  * This program prints the letter of the alphabet apart from q and e
  * Return: always 0(success)
  */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q')
			continue;
		if (ch == 'e')
			continue;
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}

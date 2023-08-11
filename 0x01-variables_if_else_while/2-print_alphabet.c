#include <stdio.h>

/**
  * main - Entry point
  *
  * this program prints lowercase alphabets
  * Return: Always 0 (success)
  */

int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
  * main - prints the name of the file it was compiled from,
  *
  * Return: Always success (0)
  */

int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
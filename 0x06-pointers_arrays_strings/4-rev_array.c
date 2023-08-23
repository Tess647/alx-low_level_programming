#include "main.h"

/**
  * reverse_array - function that reverses the content of an array of integers
  * @a: function input parameter
  * @n: function input parameter
  *
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1, temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i += 1;
		j -= 1;
	}
}

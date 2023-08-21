#include "main.h"

/**
  * swap_int - modifies a value;
  * @a: input parameter(pointer)
  * @b: imput parameter(pointer)
  * Return: Nothing
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
/**
 * add - function add 2 elements
 * @a: argument 1
 * @b: argument 2
 * Return: Sum of the 2 arguments
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - function subtracts 2 elements
 * @a: argument 1
 * @b: argument 2
 * Return: Subraction of the 2 arguments
 */

int sub(int a, int b)
{
    return (a - b);
}

int mul(int a, int b)
{
    return (a * b);
}

int div(int a, int b)
{
    if (b != 0)
    {
        return (a / b);
    }
    else
    {
        printf("Error: Division by zero\n");
        return (0);
    }
}

int mod(int a, int b)
{
    if (b != 0)
    {
        return (a % b);
    }
    else
    {
        printf("Error: Modulo by zero\n");
        return (0);
    }
}

#include "main.h"

/**
 *factorial - factorial
 *n: parameter 1
 *Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

#include "main.h"

/**
 *_pow_recursion - raise power of x
 *@x: parameter 1
 *@y: parameter 2
 *Return: power of number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);
	if (x == 0 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}


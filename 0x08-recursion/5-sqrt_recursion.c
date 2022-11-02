#include "main.h"

/**
 *calc_root - calculate root
 *@n: para 1
 *@root: para 2
 *Return: square root
 */

int calc_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (calc_root(n, root + 1));
}

/**
 *_sqrt_recursion - square rot of the number
 *@n: para 1
 *Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calc_root(n, 0));
}

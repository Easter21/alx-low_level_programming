#include "main.h"

/**
 *_abs - print absolute value of integer
 *@a: absolute value input  parameter
 *Return: integer value
 */

int _abs(int a)
{
	if (a > 0)
		return (a);
	else if (a < 0)
		return (-a);

	return (0);
}

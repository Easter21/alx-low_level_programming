#include "main.h"

/**
 *print_sign - print the sign of the number
 *@n: nis number that checks either + or -
 *Return: values are either 0,1  or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
}

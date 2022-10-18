#include "main.h"

/**
 *print_last_digit - print the last digit of a number
 *@vld: function parameter of last digit
 *Return: last digit of number value
 */
int print_last_digit(int vld)
{
	int rld;

	rld = vld % 10;

	if (rld < 0)
	{
		rld = -1 * rld;
	}

	_putchar(rld + '0');
	return (rld);
}

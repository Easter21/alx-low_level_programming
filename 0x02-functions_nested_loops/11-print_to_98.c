#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - print all natural number from n to 98
 *@n: parameter of function
 *Return: void
 */

void print_to_98(int n)
{

	for (; n <= 98 ; n++)
	{

		printf("%i, ", n);
	}
	for (; n >= 98 ; n--)
	{
		printf("%i, ", n);
	}
	if (n == 98)
		printf("%i", n);

	printf("\n");
}

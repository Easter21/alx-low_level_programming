#include "main.h"
#include <stdio.h>

/**
 *print_array - print n elements of an array of integer
 *@a: integer pointer a
 *@n: actual variable n
 *Return: void
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		if (x != (n - 1))
			printf("%i, ", a[x]);
		else
			printf("%i", a[x]);
		x++;
	}
	printf("\n");
}

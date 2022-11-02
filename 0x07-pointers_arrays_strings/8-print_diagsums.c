#include "main.h"
#include <stdio.h>

/**
 *print_diagsums -  the sum of the two diagonals of a square matrix of integers
 *@a: pointer to integer
 *@size: integer character
 *Return: sum
 */

void print_diagsums(int *a, int size)
{
	int d_sum1 = 0;
	int d_sum2 = 0;
	int rws = 0, k;

	while (rws < size)
	{
		k = (rws * size) + rws;
		d_sum1 = d_sum1 + a[k];
		rws++;
	}

	rws = 1;
	while (rws <= size)
	{
		k = (rws * size) - rws;
		d_sum2 = d_sum2 + a[k];
		rws++;
	}

	printf("%i, %i\n", d_sum1, d_sum2);
}


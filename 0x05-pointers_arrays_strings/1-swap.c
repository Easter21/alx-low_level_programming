#include "main.h"

/**
 *swap_int - swap the values of the two pointer variable each other
 *@a: first pointer parameter for function
 *@b: second pointer parameter
 *Return: void
 */

void swap_int(int *a, int *b)
{

	int t;

	t = *a;
	*a = *b;
	*b = t;
}

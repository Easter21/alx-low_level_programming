#include "main.h"

/**
 *reverse_array - reverse the content of an array of integer
 *@a: array of integer
 *@n: no of element of array	
 *Return: reversed array content
 */

void reverse_array(int *a, int n)
{
	int i,
	temp;

	i  = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}

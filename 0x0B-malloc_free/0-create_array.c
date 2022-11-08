#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 **create_array - create array of chars
 *@size: size of array
 *@c: array value
 *Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *crr;
	int i;

	if (size <= 0)
		return (NULL);
	crr = malloc(sizeof(char) * size);
	if (crr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(crr + i) = c;
	}
	*(crr + i) = '\0';

	return (crr);
}

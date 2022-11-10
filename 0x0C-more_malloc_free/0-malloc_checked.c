#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 **malloc_checked - allocating memory using malloc
 *@b: size of malloc
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

#include "main.h"

/**
 **_memset - fills memory with a constant byte
 *@s: pointer to a character variable
 *@b: pointer to a character variable
 *@n: number of byte
 *Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int k;

		k = 0;
		while (k < size)
		{
			s[k] = b;
			k++;
		}

	}

	return (s);
}

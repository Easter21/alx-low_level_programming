#include "main.h"

/**
 **_memcpy - copy memory area
 *@dest: pointer to charcter variable as destination
 *@src: pointer to character varable as source
 *@n: number of bytes
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int k;

		k = 0;
		while (k < size)
		{
			dest[k] = src[k];
			k++;
		}
	}

	return (dest);
}

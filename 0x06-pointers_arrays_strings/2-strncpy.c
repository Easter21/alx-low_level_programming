#include "main.h"

/**
 **_strncpy - copy string
 *@dest: parameter 1
 *@src: parameter 2
 *@n: parameter 3
 *Return: resutlt of string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (result);
}


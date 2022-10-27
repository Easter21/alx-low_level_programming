#include "main.h"

/**
 **_strncat - concatenates two strings by using n byte
 *@dest: first parameter of pointer
 *@src: second parameter of pointer
 *@n: n byte
 *Return: string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (result);
}


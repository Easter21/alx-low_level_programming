#include "main.h"

/**
 **_strcat - appends the src string to dest string
 *@dest: argument of _strcat function
 *@src: argument of _strcat function
 *Return: string dest
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (result);
}

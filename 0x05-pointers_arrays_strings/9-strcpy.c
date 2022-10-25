#include "main.h"

/**
 *_strlen - return the length of string
 *@s: string as parameter
 *Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 **_strcpy - copy the string pointed to by src
 *@dest: copy the string to dest
 *@src: string like source
 *Return: copy strings
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

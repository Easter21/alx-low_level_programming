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
 *print_rev - print string in reverse
 *@s: string pointer s
 *Return: void
 */

void print_rev(char *s)
{
	int i, l;
	char temp;

	l = _strlen(s) - 1;

	for (i = 0 ; i < l ; i++)
	{
		temp = s[i];
		s[i] = s[l];
		s[l] = temp;
		l--;
	}
}

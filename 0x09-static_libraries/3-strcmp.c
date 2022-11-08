#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1: string parameter 1
 *@s2: string parameter 2
 *Return: comparation result
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}

	else
	{
		return (0);
	}
}

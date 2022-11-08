#include "main.h"
#include <stdio.h>

/**
 **_strstr - locate substring
 *@haystack: pointer to char
 *@needle: target substrig for searching
 *Return: null or located substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}

		if (*first == '\0')
			return (haystack);
	haystack++;
	}

	return (NULL);
}

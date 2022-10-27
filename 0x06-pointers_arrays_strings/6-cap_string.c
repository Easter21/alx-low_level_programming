#include "main.h"

/**
 **cap_string - capitalize all words of string
 *@s: character s paramter
 *Return: capitalized letter word
 */

char *cap_string(char *s)
{
	int i = 0;

	while (i != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}

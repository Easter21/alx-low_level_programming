#include "main.h"

/**
 **cap_string - capitalize all words of string
 *@s: character s paramter
 *Return: capitalized letter word
 */
char *cap_string(char *s)
{
	int i = 0;

	int counter = 0;

	while (s[i] != '\0')
	{
		if ((counter % 2 == 1) && s[i] >= 'a' && s[i] <= 'z')
		{
		s[i] = s[i] - 32;
		}
		else if (s[i] == ' ')
		{
			counter++;
		}
		i++;
	}
	return (s);
}

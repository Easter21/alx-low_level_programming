#include "main.h"

/**
 **string_toupper - change all lowercase letters to uppercase
 *@*: character parameter
 *Return: uppecase letter
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (int) s[i] - 32;
		i++;
	}
	return (s);
}

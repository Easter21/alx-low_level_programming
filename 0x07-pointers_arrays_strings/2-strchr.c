#include "main.h"
#include <stdio.h>

/**
 **_strchr - locates chracter instring
 *@s: pointer to character
 *@c:character type variable
 *Return: the first occurance of charcter
 */

char *_strchr(char *s, char c)
{
	int k;

	k = 0;
	while (s[k] != '\0' && s[k] != c)
		k++;

	if (s[k] == c)
		return (&s[k]);
		/* k++;*/
	else

	return (NULL);
}

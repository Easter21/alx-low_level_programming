#include "main.h"
#include <stdio.h>

/**
 **_strpbrk - search string
 *@s: pointer to a char variable
 *@accept: pointer to char
 *Return: pointer to byte
 */

char *_strpbrk(char *s, char *accept)
{
	int k, m;
	
	k = 0;
	/* m = 0; */
	while (s[k] != '\0')
	{
		m = 0;
		while (accept[m] != '\0')
		{
			if (s[k] == accept[m])
				return (&s[k]);
			m++;
		}
		k++;
	}

	return (NULL);
}

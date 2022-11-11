#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}


/**
 **string_nconcat - concatenates two strings
 *@s1: parameter string 1
 *@s2: parameter string 2
 *@n: n byte to concat from string 2
 *Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len;/* i, j;*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* negative n byte size not acceptable */
		return (NULL);
	if (num >= _strlen(s1))
		num = _strlen(s1);
	len = _strlen(s2) + num + 1; /* sring length including null pointer */

	ptr = malloc(sizeof(*ptr) * len); /** calling malloc function */

	if (ptr == NULL)
		return (NULL);

		/* concat string */
	while (*s2 != '\0')
	{
		/*ptr[i] = s2[i];*/
		s2++;
	}

	while (*s1 != '\0' && num--)
	{
		*ptr = *s1 = *s2;
		s1++;
		s2++;
	}
	*ptr = '\0';

	return (ptr);
}

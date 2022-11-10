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
	int num, len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* negative n byte size not acceptable */
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = _strlen(s1) + num + 1; /* sring length including null pointer */

	ptr = malloc(sizeof(*ptr) * len); /** calling malloc function */

	if (ptr == NULL)
		return (NULL);

	i = 0;
	/* concat string */
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < num)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';

	return (ptr);
}



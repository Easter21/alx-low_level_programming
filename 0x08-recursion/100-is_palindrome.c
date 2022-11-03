#include "main.h"
/**
 * compare - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *head, char *tail)
{

	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (compare(head + 1, tail - 1));

	return (0);
}


/**
 *_strlen - find length of string to access last index
 *@s: string
 *Return: length
 */

int _strlen(char *s)
{

	if (*s == '\0')
	return (0);
	s++;
	return (1 + (_strlen(s)));
}


/**
 *is_palindrome - identify palindrome word
 *@s: pointer to a char
 *Return: a given word is palindrome return 1 other wise return 0
 */

int is_palindrome(char *s)
{
	int l = _strlen(s);

	return (compare(s, (s + l - 1)));
}

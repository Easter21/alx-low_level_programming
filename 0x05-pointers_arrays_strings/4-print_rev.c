#include "main.h"

/**
 *print_rev - print string in reverse
 *@s: string pointer s
 *Return: void
 */

void print_rev(char *s)
{

	int length = 0;
	int i;

	/* iterate to find length of string and point to last character */
	while (*s != '\0')
	{
		length++;
		++s;
	}

	/* go back to character before null character */
	s--;

	/* print string reversed */
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

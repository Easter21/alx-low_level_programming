#include "main.h"

/**
 *puts_half - print half of string
 *@str: string pointer
 *Return: void
 */

void puts_half(char *str)
{
	int k = 0;

	for (; str[k] != '\0' ; k++)
	{
		if ((k % 2) != 0)
		{
			_putchar(str[k]);
		}
		/* k++; */
	}
	_putchar('\n');

}

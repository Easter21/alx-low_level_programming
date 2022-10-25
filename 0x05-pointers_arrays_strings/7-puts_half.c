#include "main.h"

/**
 *puts_half - print half of string
 *@str: string pointer
 *Return: void
 */

void puts_half(char *str)
{
	int k = 0, i, l;

	for (i = 0; str[i] != '\0'; i++)
		k++;

	l = (k / 2);

	if ((k % 2) == 1)
	{
		l = ((k + 1) / 2);
	}


	for (i = l; str[i] != '\0'; i++)
		_putchar(str[i]);
		/* k++; */

	_putchar('\n');

}

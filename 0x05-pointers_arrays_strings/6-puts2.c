#include "main.h"

/**
 *puts2 - print every other character
 *@str: string pointer
 *Return: void
 */

void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if ((j % 2) == 0)

			_putchar(str[j]);
		/* else */
			/* continue; */
		j++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 *print_alphabet_x10 - print all lowercase alphabet 10 times
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	/* char lowerch = 'a';*/
	int counter = 1;

	while (counter <= 10)
	{
		char lowerch = 'a';

		while (lowerch <= 'z')
		{
			_putchar(lowerch);
			lowerch++;
		}
		counter++;
		_putchar('\n');
	}
}

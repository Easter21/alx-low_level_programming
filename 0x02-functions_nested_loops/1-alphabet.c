#include "main.h"

/**
 *print_alphabet - lowercase alphabet
 *
 *Return: void
 */

void print_alphabet(void)
{
	char chlower = 'a';

	while (chlower <= 'z')
	{
		_putchar(chlower);
		chlower++;
	}

	_putchar('\n');

	/* return (0);*/
}

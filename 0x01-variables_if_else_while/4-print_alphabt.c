#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char chlower = 'a';

	while (chlower <= 'z')
	{
		if ((chlower != 'e') && (chlower != 'q'))
		{
			putchar(chlower);
		}
		chlower++;
	}
	putchar('\n');

	return (0);
}

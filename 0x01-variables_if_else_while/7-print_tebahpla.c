#include <stdio.h>

/**
 *main - print lowercase letter in reverse using putchar function
 *Return: Always 0 (Success)
 */

int main(void)
{
	char chlower = 'z';

	for (chlower ; chlower >= 'a' ; chlower--)
	{
		putchar(chlower);
	}
	putchar('\n');
}

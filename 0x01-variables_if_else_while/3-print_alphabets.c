#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char chlower = 'a';
	char chupper = 'A';

	do {
		putchar(chlower);
		chlower++;

	} while (chlower <= 'z');

	do {
		putchar(chupper);
		chupper++;

	} while (chupper <= 'Z');
	putchar('\n');
	return (0);
}

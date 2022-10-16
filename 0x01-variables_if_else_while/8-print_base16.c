#include <stdio.h>

/**
 *main - prints hexadecimal using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n_10 = '0';
	int b_16 = 'a';

	while (n_10 <= '9')
	{
		putchar(n_10);
		n_10++;
	}

	while (b_16 <= 'f')
	{
		putchar(b_16);
		b_16++;
	}

	putchar('\n');

	return (0);
}

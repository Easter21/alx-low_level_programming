#include <stdio.h>

/**
 *main - print 00 to 99 using putchar fun.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;

	for (num2 = '0'; num2 <= '9'; num2++)
	{
		for (num1 = (num2 + 1); num1 <= '9'; num1++)
		{
			putchar(num2);
			putchar(num1);

			if (num2 != '8' || num1 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

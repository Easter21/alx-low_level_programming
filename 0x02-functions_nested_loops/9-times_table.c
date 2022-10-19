#include "main.h"

/**
 *times_table - print 9 times  multiplication table
 *
 *Return: void
 */

void times_table(void)
{
	int row = 0;
	int cols;
	int mul;

	while (row <= 9)
	{
		cols = 0;
		while (cols <= 9)
		{

			mul = row * cols;

			if (cols == 0)
			{
				_putchar('0' + mul);
			}
			else if (mul <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mul);
			}
			else if (mul > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (mul / 10));
				_putchar('0' + (mul % 10));
			}
			cols++;
		}
		row++;
		_putchar('\n');
	}
}

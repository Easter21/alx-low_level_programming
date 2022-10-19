#include "main.h"
/**
 *print_times_table - print 100 times multiplication table
 *@n: parameter
 *Return: void
 */

void print_times_table(int n)
{
	int row = 0;
	int cols;
	int mul;

	if (n >= 0 && n <= 15)
	{
		while (row <= n)
		{
			cols = 0;
			while (cols <= n)
			{
				mul = row * cols;
				if (cols == 0)
					_putchar('0' + mul);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (mul <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + mul);
					}
					else if (mul > 9 && mul < 100)
					{
						_putchar(' ');
						_putchar('0' + (mul / 10));
						_putchar('0' + (mul % 10));
					}
					else if (mul >= 100)
					{
						_putchar('0' + (mul / 100));
						_putchar('0' + ((mul / 10) % 10));
						_putchar('0' + (mul % 10));
					}
					/* cols++;*/
				}
				cols++;
			}
			row++;
			_putchar('\n');
		}
	}
}

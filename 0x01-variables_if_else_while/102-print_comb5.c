#include <stdio.h>

/**
 *main - print the nember range from 0 to 99 and two numbers separated by space
 *Return: Always 0 (Success)
 */

int main(void)
{
	int oneth;
	int tenth;
	int oneth2;
	int tenth2;

	for (tenth = '0'; tenth <= '9'; tenth++)
	{
		for (oneth = '0'; oneth <= '9'; oneth++)
		{
			for (tenth2 = tenth; tenth2 <= '9'; tenth2++)
			{
				for (oneth2 = oneth + 1; oneth2 <= '9'; oneth2++)
				{
					putchar(tenth);
					putchar(oneth);
					putchar(' ');
					putchar(tenth2);
					putchar(oneth2);

					if (!((tenth == '9' && oneth == '8') &&
					      (tenth2 == '9' && oneth2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				oneth2 = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}

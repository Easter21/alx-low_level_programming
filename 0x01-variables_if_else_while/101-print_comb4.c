#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int hundredth = '0';
	int tenth;
	int oneth;

	while (hundredth <= '9')
	{
		/* hundredth++; */
		tenth = hundredth + 1;
		while (tenth <= '9')
		{
			/* hundredth++; */
			/* tenth++; */
			oneth = tenth + 1;
			while (oneth <= '9')
			{
				/* oneth++; */
				putchar(hundredth);
				putchar(tenth);
				putchar(oneth);
				if (hundredth != '7' || tenth != '8' || oneth != '9')
				{
					putchar(',');
					putchar(' ');
				}
				oneth++;
			}
			tenth++;
		}
		hundredth++;
	}
	putchar('\n');
	return (0);
}

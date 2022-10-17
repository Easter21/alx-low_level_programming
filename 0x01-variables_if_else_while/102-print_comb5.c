#include <stdio.h>

/**
 *main - print the nember range from 0 to 99 and two numbers separated by space
 *
 *Return: Alaways 0 (Success)
 */

int main(void)
{
	int oneth = '0';
	int tenth = '0';
	int oneth2;
	int tenth2;

	while (tenth <= '9')
	{
		tenth2 = tenth;
		while (oneth <= '9')
		{
			oneth2 = oneth + 1;
			while (tenth2 <= '9')
			{
				/* tenth2 = tenth; */
				while (oneth2 <= '9')
				{
					/* oneth2 = oneth + 1; */
					putchar(tenth);
					putchar(oneth);
					putchar(' ');
					putchar(tenth2);
					putchar(oneth2);
					if (!((tenth == '9' && oneth == '8') && (tenth2 == '9' && oneth2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
					oneth2++;
				}
				tenth2++;
				oneth2 = '0';
			}
			oneth++;
		}
		tenth++;
	}
	putchar('\n');

	return (0);
}

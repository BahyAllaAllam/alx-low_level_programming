#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int d = 0, c;

	while (d <= 99)
	{
		c = d;
		while (c <= 99)
		{
			if (c != d)
			{
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				putchar(' ');
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);

				if (d != 98 || c != 99)
				{
					putchar(',');
					putchar(' ');
				}

			}
			c++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}

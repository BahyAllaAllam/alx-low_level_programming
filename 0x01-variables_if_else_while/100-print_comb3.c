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

	while (d <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			if (d != c && d < c)
			{
				putchar(d + 48);
				putchar(c + 48);

				if (d + c != 17)
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

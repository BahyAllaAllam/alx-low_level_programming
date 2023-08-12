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
	int d = 0, c, b;

	while (d <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			b = 0;
			while (b <= 9)
			{
				if (d != c && d < c && c != b && c < b)
				{
					putchar(d + 48);
					putchar(c + 48);
					putchar(b + 48);

					if (d + c + b != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				b++;
			}
			c++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}

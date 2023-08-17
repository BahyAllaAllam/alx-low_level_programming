#include "main.h"

/**
 * print_times_table - entry point.
 *
 * @n: false or true validation.
 *
 * Return: 0 (Success).
*/

void print_times_table(int n)
{
	int res, num1, num2;

	if (n <= 15 && n >= 0)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			_putchar(48);
			for (num1 = 1; num1 <= n; num1++)
			{
				_putchar(',');
				_putchar(' ');

				res = num2 * num1;

				if (res <= 9)
					_putchar(' ');
				if (res <= 99)
					_putchar(' ');

				if (res >= 100)
				{
					_putchar((res / 100) + 48);
					_putchar((res / 10) % 10 + 48);
				} else if (res <= 99 && res >= 10)
					_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
		}	_putchar('\n');
	}
}

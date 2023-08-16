#include "main.h"

/**
 * times_table - entry point.
 *
 * Description: false or true validation.
 *
 * Return: 0 (Success).
*/

void times_table(void)
{
	int num1, num2, res;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar(48);
		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');

			res = num1 * num2;
			if (res <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((res / 10) + 48);
			}
			_putchar((res % 10) + 48);
		}
		_putchar('\n');
	}
}

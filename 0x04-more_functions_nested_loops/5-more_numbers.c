#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i = 0;
	int num;

	while (i <= 9; i++)
	{
		int x = 0;

		while (x <= 14; x++)
		{
			num = x;
			if (x >= 10)
			{
				_putchar(1 + 48);
				num = x % 10;
			}
			_putchar(x + 48);
		}
	}
	_putchar('\n');
}

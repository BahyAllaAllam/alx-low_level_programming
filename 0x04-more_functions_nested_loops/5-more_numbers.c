#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i, x, num;

	for (i = 1; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			num = x;
			if (x > 9)
			{
				_putchar(1 + 48);
				num = x % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}
}

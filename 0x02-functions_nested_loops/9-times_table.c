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
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			int res
			res = num1 * num2;
			char res
			_putchar(res + 48);
			if (res == 81)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}	_putchar('\n');
}

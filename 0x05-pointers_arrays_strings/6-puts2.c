#include "main.h"

/**
 * puts2 - check the code
 *
 * @str: str
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}

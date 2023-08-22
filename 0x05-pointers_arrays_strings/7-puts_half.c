#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: str
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0, len = strlen(str) / 2;

	while (str[len])
	{
		putchar(str[len]);
		len++;
	}
	putchar('\n');
}

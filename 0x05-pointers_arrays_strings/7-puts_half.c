#include "main.h"
#include <string.h>

/**
 * puts_half - check the code
 *
 * @str: str
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int len = strlen(str) / 2;

	while (str[len] != '\0')
	{
		putchar(str[len]);
		len++;
	}
	putchar('\n');
}

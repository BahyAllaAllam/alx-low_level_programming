#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;
	int len = strlen(s) - 1;

	while (s[len])
	{
		putchar(s[len]);
		len--;
	}
	putchar("\n");
}

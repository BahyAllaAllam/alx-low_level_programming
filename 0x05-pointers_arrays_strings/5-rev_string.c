#include "main.h"
#include <string.h>

/**
 * rev_string - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len = strlen(s) - 1;

	while (s[len])
	{
		putchar(s[len]);
		len--;
	}
	putchar('\n');
}

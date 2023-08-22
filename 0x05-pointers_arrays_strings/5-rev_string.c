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
	int i = 0, len = strlen(s) - 1;
	char temp;

	while (i < len)
	{
		temp = s[len];
		s[len] = s[i];
		s[i] = temp;
		i++;
		len--;
	}
}

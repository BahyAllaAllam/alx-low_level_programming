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

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
}

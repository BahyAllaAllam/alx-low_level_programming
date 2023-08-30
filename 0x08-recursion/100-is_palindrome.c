#include "main.h"
#include <string.h>

/**
 * is_palindrome - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int len = strlen(s) - 1, i;

	if (!s)
		return (1);
	
	for (i = 0; i <= len; i++)
	{
		if (s[i] != s[len - 1])
			return (0);
	}
	return (1);
}

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
	int len = strlen(s) - 1;

	if (!s)
		return (1);
	else if (s[0] == s[len] && s[1] == s[len - 1])
		return (1);

	return (0);
}

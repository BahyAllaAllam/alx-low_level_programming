#include "main.h"
#include <string.h>

/**
 * check_str - check the code
 *
 * @s: s
 * @i: i
 * @e: e
 * @m: m
 *
 * Return: Always 0.
 */

int check_str(char *s, int i, int e, int m)
{
	if ((i == e && m != 0) || (i == e + 1 && m == 0))
		return (1);
	else if (s[i] != s[e])
		return (0);
	return (check_str(s, i + 1, e - 1, m));
}

/**
 * is_palindrome - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_str(s, 0, len - 1, len % 2));
}

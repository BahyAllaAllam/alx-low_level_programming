#include "main.h"
#include <stdio.h>

int inception(char *s1, char *s2);
char *move_past_star(char *s2);

/**
 * wildcmp - check the code
 *
 * @s1: s1
 *
 * @s2: s2
 *
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);

		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}

/**
 * inception - check the code
 *
 * @s1: s1
 *
 * @s2: s2
 *
 * Return: Always 0.
 */

int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);
}

/**
 * move_past_star - check the code
 *
 * @s2: s2
 *
 * Return: Always 0.
 */

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	return (s2);
}

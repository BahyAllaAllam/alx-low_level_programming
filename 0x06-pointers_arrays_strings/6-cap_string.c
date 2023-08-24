#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * isDeli - check the code
 *
 * @c: c
 *
 * Return: Always 0.
 */

int isDeli(char c)
{
	int i;
	char deli[] = " \t\n,.;!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == deli[i])
		{
			return (1);
		}
	}

	return (0);
}

/**
 * cap_string - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	char *p = s;
	int foundDeli = 1;

	while (*s)
	{
		if (isDeli(*s))
		{
			foundDeli = 1;
		}
		else if (islower(*s) && foundDeli)
		{
			*s -= 32;
			foundDeli = 0;
		}
		else
		{
			foundDeli = 0;
		}
		s++;
	}

	return (p);
}

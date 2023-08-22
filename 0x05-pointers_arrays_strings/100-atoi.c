#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int x = 1;

	do {
		if (*s == '-')
			x = x * -1;
		else if (*s >= '0' && *s <= '9')
			x = (x * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * x);

}

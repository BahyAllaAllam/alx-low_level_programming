#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int len = strlen(s) - 1;
	int start, i = 0, sign = 1;
	char *x;

	if (atoi(s) == 0)
	{
		while (i < len)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				start = i;
				break;
			}
			else if (s[i] == '-' || s[i] == '+')
			{
				if (s[i] == '-')
				{
					sign = sign * -1;
				}
				else
				{
					sign = sign * 1;
				}
			}
			i++;
		}
		if (sign == -1)
		{
			putchar('-');
		}
		x = _sliceString(s, start, len);

		return (atoi(x));
	}
	else
	{
		return (atoi(s));
	}
}

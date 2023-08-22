#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sliceString - sliceString
 *
 * @str: str
 *
 * @start: start
 *
 * @end: end
 *
 * _atoi - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

char *sliceString(char *str, int start, int end)
{
	int i;
	int size = (end - start) + 2;
	char *output = (char *)malloc(size * sizeof(char));

	for (i = 0; start <= end; start++, i++)
	{
		output[i] = str[start];
	}

	output[size] = '\0';

	return (output);
}

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
		x = sliceString(s, start, len);

		return (atoi(x));
	}
	else
	{
		return (atoi(s));
	}
}

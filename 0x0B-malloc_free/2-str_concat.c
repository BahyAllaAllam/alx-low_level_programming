#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - prints buffer in hexa
 *
 * @s1: the size of the memory to print
 *
 * @s2: s2
 *
 * Return: Nothing.
*/

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i = 0;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	m = malloc(len1 + len2 + 1);

	if (m == 0)
		return (0);

	while (i < len1 + len2)
	{
		if (i < len1)
			m[i] = s1[i];
		else
		{
			m[i] = s2[i - len1];
		}
		i++;
	}
	m[i] = '\0';
	return (m);
}

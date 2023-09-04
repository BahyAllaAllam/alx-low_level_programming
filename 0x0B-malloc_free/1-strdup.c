#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - prints buffer in hexa
 *
 * @str: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int i, len;
	char *p;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	p = malloc(len);

	if (len == 0 || p == 0)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = str[i];
	return (p);
}

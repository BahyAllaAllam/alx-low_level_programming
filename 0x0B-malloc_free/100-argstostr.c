#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - prints a grid of integers
 * @ac: the address of the two dimensional grid
 * @av: width of the grid
 *
 * Return: Nothing.
 */

char *argstostr(int ac, char **av)
{
	char *m;
	int i = 0, len = 0, x = 0, c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; i < ac; i++, len++)
	{
		len += strlen(av[i]);
	}
	m = malloc(sizeof(char) * len + 1);
	if (m == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++, c++)
		{
			m[c] = av[i][x];
		}
		m[c] = '\n';
		c++;
	}
	m[c] = '\0';
	return (m);
}

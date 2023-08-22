#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sliceString - main
 *
 * @str: str
 *
 * @start: start
 *
 * @end: end
 *
 * Return: 0 (Success).
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

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check the code
 *
 * @s1: s1
 * @s2: s2
 * @n: n
 *
 * Return: Always 0.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int len = strlen(s1), len1 = strlen(s1), len2 = strlen(s2), i;

	if (n >= len2)
		len += len2;
	else
		len += n;

	ptr = malloc(len + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}

	ptr[i] = '\0';
	return (ptr);
}

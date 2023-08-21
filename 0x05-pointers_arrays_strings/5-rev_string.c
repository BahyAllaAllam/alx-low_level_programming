#include "main.h"
#include <string.h>

/**
 * rev_string - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0;
	int len = strlen(s) - 1;
	char new_s[];

	while (i <= s[len + 1])
	{
		new_s[i] = s[len];
		len--;
		i++;
	}
	printf("%s", new_s);
}

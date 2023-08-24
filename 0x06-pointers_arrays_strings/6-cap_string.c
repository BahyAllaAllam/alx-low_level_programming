#include "main.h"
#include <string.h>

/**
 * cap_string - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32 || s[i] == 9 || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			int n = 1;
			while (s[i + n] >= 97 && s[i + n] <= 122)
			{
				s[i + n] = s[i + n] - 32;
				n++;
				break;
			}
		}
	}

	return (s);
}

#include "main.h"
#include <string.h>

/**
 * rot13 - check the code
 *
 * @s: s
 *
 * Return: Always 0.
 */

char *rot13(char *s)
{
	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p = s;

	while (*s)
	{
		for (int i = 0; i < 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}

	return (p);
}

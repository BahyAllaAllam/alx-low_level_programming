#include "main.h"
#include <string.h>

/**
 * _strpbrk - prints buffer in hexa
 *
 * @s: the address of memory to print
 *
 * @accept: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

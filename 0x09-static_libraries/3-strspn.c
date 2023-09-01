#include "main.h"
#include <string.h>

/**
 * _strspn - prints buffer in hexa
 *
 * @s: the address of memory to print
 *
 * @accept: the size of the memory to print
 *
 * Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

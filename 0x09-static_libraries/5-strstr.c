#include "main.h"
#include <string.h>

/**
 * _strstr - prints buffer in hexa
 *
 * @haystack: the address of memory to print
 *
 * @needle: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

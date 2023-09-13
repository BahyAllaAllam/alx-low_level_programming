#include "main.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: f
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code
 * @separator: separator
 * @n: n
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
	{
		printf("%d%s", va_arg(ptr, int));
		if (separator)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ptr);
}

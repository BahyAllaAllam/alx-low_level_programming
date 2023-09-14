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
	int i = 0;
	va_list ptr;

	va_start(ptr, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ptr);
}

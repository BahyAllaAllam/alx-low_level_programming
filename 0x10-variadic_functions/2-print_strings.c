#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - check the code
 * @separator: separator
 * @n: n
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
	{
		printf("%s%s", (str = va_arg(ptr, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	}
	va_end(ptr);
}

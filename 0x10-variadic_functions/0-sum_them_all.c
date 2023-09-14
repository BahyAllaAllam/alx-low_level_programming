#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code
 * @n: n
 *
 * Return: int.
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int i = 0, sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
}

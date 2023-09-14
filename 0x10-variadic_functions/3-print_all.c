#include "variadic_functions.h"
#include <stdarg.h>

/**
 * format_char - check the code
 * @separator: separator
 * @ptr: ptr
 *
 * Return: void
*/
void format_char(char *separator, va_list ptr)
{
	pritnf("%s%c", separator, va_arg(ptr, int));
}
/**
 * format_int - check the code
 * @separator: separator
 * @ptr: ptr
 *
 * Return: void
*/
void format_int(char *separator, va_list ptr)
{
	printf("%s%d", separator, va_arg(ptr, int));
}
/**
 * format_float - check the code
 * @separator: separator
 * @ptr: ptr
 *
 * Return: void
*/
void format_float(char *separator, va_list ptr)
{
	printf("%s%f", separator, va_arg(ptr, double));
}
/**
 * format_string - check the code
 * @separator: separator
 * @ptr: ptr
 *
 * Return: void
*/
void format_string(char *separator, va_list ptr)
{
	char *str = va_arg(ptr, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}
/**
 * print_all - check the code
 * @format: format
 *
 * Return: void
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	va_list ptr;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(sep, ptr);
				sep = ", ";
			}
			j++;
		}
		i++
	}
	printf("\n");
	va_end(ptr);
}

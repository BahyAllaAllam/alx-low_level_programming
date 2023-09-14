#ifndef VARISDIC_FUNCTIONS_H
#define VARISDIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct token
{
	char *token;
	void (*f)(char *, val_list);
} token_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

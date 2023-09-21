#include "lists.h"
#include <string.h>

/**
 * print_list - check the code
 * @h: h
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", strlen((*h).str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}

	return (i);
}

#include "lists.h"

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
		int len = strlen((*h).str);

		printf("[%d] %s\n", len, h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}

	return (i);
}

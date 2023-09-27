#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - check the code
 * @head: head
 *
 * Return: Always 0.
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *end;

	if (!head)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
		{
			if (p == end->next)
				return (end->next);
		}
	}
	return (NULL);
}

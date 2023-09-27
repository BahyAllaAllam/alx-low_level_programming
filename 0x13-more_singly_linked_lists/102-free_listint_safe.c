#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop_v1 - check the code
 * @head: h
 *
 * Return: Always 0.
*/
listint_t *find_listint_loop_v1(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
		{
			if (ptr == end->next)
				return (end->next);
		}
	}
	return (NULL);
}
/**
 * free_listint_safe - check the code
 * @h: h
 *
 * Return: Always 0.
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *t, *loop_node;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);
	loop_node = find_listint_loop_v1(*h);
	for (len = 0; (*h != loop_node || loop) && *h != NULL; *h = t)
	{
		len++;
		t = (*h)->next;
		if (*h == loop_node && loop)
		{
			if (loop_node == loop_node->next)
			{
				free(*h);
				break;
			}
			len++;
			t = t->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}

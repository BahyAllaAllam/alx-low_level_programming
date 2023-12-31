#include "lists.h"

/**
 * free_list - check the code
 * @head: head
 *
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

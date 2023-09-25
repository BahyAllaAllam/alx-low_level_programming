#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: head
 *
 * Return: NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}

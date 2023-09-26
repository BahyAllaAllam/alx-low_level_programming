#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: head
 * @idx: idx
 * @n: n
 *
 * Return: Always 0.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *prev_node, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!*head || !new_node)
		return (NULL);
	new_node->n = n;
	while (temp && i < idx)
	{
		prev_node = temp;
		temp = temp->next;
		i++;
	}
	prev_node->next = new_node;
	new_node->next = temp;
	return (new_node);
}

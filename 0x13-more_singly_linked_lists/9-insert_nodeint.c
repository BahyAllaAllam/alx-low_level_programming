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
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
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
}

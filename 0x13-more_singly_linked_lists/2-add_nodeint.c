#include "lists.h"

/**
 * add_nodeint - check the code
 * @head: h
 * @n: n
 *
 * Return: Always 0.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (!head)
		return (NULL);

	listint_t *temp = malloc(sizeof(listint_t));

	if (n)
	{
		temp->n = n;
		if (!temp)
		{
			free(temp);
			return (NULL);
		}
	}
	temp->next = *head;
	*head = temp;
	return (temp);
}

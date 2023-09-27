#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * looped_listint_len - check the code
 * @new: new
 *
 * Return: Always 0.
*/
size_t looped_listint_len(const listint_t *new)
{
	const listint_t *new_list, *list_new;
	size_t i = 1;

	if (new == NULL || new->next == NULL)
		return (0);
	new_list = new->next;
	list_new = new_list->next
	while (list_new)
	{
		if (new_list == list_new)
		{
			new_list = new;
			while (new_list != list_new)
			{
				i++;
				new_list = new_list->next;
				list_new = list_new->next;
			}
			new_list = new_list->next;
			while (new_list != list_new)
			{
				i++;
				new_list = new_list->next;
			}
			return (i);
		}
		new_list = new_list->next;
		list_new = (list_new->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - check the code
 * @head: head
 *
 * Return: Always 0.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;

	i = looped_listint_len(head);
	if (i == 0)
	{
		for (; head != NULL; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (num = 0; num < i; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (i);
}

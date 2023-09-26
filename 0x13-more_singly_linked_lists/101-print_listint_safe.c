#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * rm - check the code
 * @list: head
 * @size: size
 * @new: new
 *
 * Return: Always 0.
*/
const listint_t **rm(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t i = 0;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	while (i < size - 1)
	{
		new_list[i] = list[i];
		i++;
	}
	new_list[i] = new;
	free(list);
	return (new_list);
}
/**
 * print_listint_safe - check the code
 * @head: head
 *
 * Return: Always 0.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		while (i < num)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
			i++;
		}
		num++;
		list = rm(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next
	}
	free(list);
	return (num);
}

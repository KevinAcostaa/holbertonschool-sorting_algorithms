#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - function que ordena mediante insertion sort
 * @list: Pointer
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev;

	if (!list || !*list || !(*list)->next)
	{
		return;
	}
	current = (*list)->next;

	while (current)
	{
		prev = current->prev;

		while (prev && prev->n > current->n)
		{
			temp = current->next;

			if (prev->prev)
			{
				prev->prev->next = current;
			}
			current->prev = prev->prev;
			prev->next = temp;
			if (temp)
			{
				temp->prev = prev;
			}
			current->next = prev;
			prev->prev = current;

			if (!current->prev)
			{
				*list = current;
			}
			print_list(*list);
			prev = current->prev;
		}
		current = current->next;
	}
}

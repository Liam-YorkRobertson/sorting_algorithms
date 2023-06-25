#include "sort.h"

/**
 *insertion_sort_list - Sorts doubly linked list of integers in ascending order
 *@list: Pointer to the head of the doubly linked list
 *Return: None (void)
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;
	listint_t *temp, *prev;

	if (list == NULL || *list == NULL || current == NULL)
	{
		return;
	}

	while (current != NULL)
	{
		temp = current;
		prev = current->prev;

		while (prev != NULL && temp->n < prev->n) /*swapping nodes*/
		{
			if (temp->next != NULL)
			{
				temp->next->prev = prev;
			}
			prev->next = temp->next;

			if (prev->prev != NULL)
			{
				prev->prev->next = temp;
			}
			temp->prev = prev->prev;
			temp->next = prev;
			prev->prev = temp;

			if (temp->prev == NULL)
			{
				*list = temp;
			}
			print_list(*list);
			prev = temp->prev;
		}
		current = current->next;
	}
}

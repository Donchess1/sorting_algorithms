#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: Pointer to a pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;
	
	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			if (current->next)
				current->next->prev = current->prev;

			current->prev->next = current->next;
			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;

			if (current->prev == NULL)

				*list = current;
			else
				current->prev->next = current;
			print_list(*list);
		}

		current = temp;
	}
}

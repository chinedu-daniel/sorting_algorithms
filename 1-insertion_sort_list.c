#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order
 * @list: double pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;


	while (current != NULL)
	{
		listint_t *temp = current->next;

		if (temp != NULL && current->n > temp->n)
		{
			listint_t *prev = current->prev;

			while (prev != NULL && current->n < prev->n)
			{
				if (current->next != NULL)
					current->next->prev = prev;

				prev->next = current->next;
				current->next = prev;
				current->prev = prev->prev;
				prev->prev = current;

				if (current->prev == NULL)
					*list = current;
				else
					current->prev->next = current;

				print_list(*list);

				prev = current->prev;
			}
		}
		else
		{
			current = temp;
		}
	}
}

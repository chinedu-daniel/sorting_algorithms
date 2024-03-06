#include "sort.h"

/**
<<<<<<< HEAD
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
=======
 * step_down - Moves a node of higher value a step down
 * @node: the node to step down
 * @list: the list containing the node
 * Return: the D-list
*/


listint_t *step_down(listint_t *node, listint_t **list)
{
	listint_t *prev_node = node->prev, *curr_node = node;

	if ((prev_node) == NULL)
	{
		curr_node->prev = NULL;
		*list = curr_node;
	}

	prev_node->next = curr_node->next;
	if (curr_node->next != NULL)
		curr_node->next->prev = prev_node;

	curr_node->prev = prev_node->prev;
	curr_node->next = prev_node;

	if (prev_node != NULL)
		prev_node->prev = curr_node;

	else
		*list = curr_node;
	prev_node->prev = curr_node;

	return (curr_node);
}

/**
 * insertion_sort_list - a function that sorts
 * a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 * @list: the list to be sorted
 * Return: Void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL)
		return;

	if ((*list)->next == NULL)
		return;

	node = (*list)->next;
	while (node)
	{
		while (node->prev && node->prev->n > node->n)
		{
			node = step_down(node, list);
			print_list(*list);
		}
		node = node->next;
>>>>>>> 4c8fb760b60c3bcc5399866a220515118aef7a49
	}
}

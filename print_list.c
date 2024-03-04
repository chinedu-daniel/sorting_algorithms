<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> a22158834d9dfc868ee853737620a266a0526cb5
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
<<<<<<< HEAD
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
=======

void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
	    printf("%d", list->n);
	    ++i;
	    list = list->next;
	}
	printf("\n");
>>>>>>> a22158834d9dfc868ee853737620a266a0526cb5
}

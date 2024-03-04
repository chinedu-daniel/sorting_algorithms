<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
=======
#include "sort.h"
>>>>>>> a22158834d9dfc868ee853737620a266a0526cb5

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
<<<<<<< HEAD
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
=======

void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
	    printf("%d", array[i]);
	    ++i;
	}
	printf("\n");
>>>>>>> a22158834d9dfc868ee853737620a266a0526cb5
}

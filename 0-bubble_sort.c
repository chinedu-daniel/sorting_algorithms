#include "sort.h"

/**
 * swap - swaps pointer of two digits
 * @x: digit 1 to swap
 * @y: digit 2 to swap
 * Return: Void
*/

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t index, xdex;
	bool swapped;

	for (index = 0; index < size - 1; index++)
	{
		swapped = false;

		for (xdex = 0; xdex < size - index - 1; xdex++)
		{
			if (array[xdex] > array[xdex + 1])
			{
				swap(&array[xdex], &array[xdex + 1]);
				print_array(array, size);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

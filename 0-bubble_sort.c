#include "sort.h"

/**
<<<<<<< HEAD
 * bubble_sort - Sorts an array of integers in ascending order
 *
 * @array: Pointer to the first element of the array to be sorted.
 * @size:  Number of elements in the array.
 */


void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	size_t k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				printf("After swap: ");
				for (k = 0; k < size; k++)
				{
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}
=======
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
>>>>>>> a22158834d9dfc868ee853737620a266a0526cb5
	}
}

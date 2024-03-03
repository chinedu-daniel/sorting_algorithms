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

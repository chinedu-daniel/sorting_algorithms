#include "sort.h"

/**
 * swap - swaps pointer of two digits
 * Return: Void
*/

void swap(int* x, int* y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

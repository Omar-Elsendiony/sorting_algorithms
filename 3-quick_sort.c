#include "sort.h"

/**
 * quick_sort - Sort by quick sort
 * @array: array of size_t.
 * @size: size of array.
 * Return: Nothing - void function
 */

void quick_sort(int *array, size_t size)
{
	size_t splitIndex = -1;
	size_t i = 0;
	size_t tmp = 0;

	/* The element where we will find its right place and do the split around it*/
	int pivot = array[size - 1];

	if (size == 1)
	{
		return;
	}
	while (i != size - 1)
	{
		if (array[i] < pivot)
		{
			++splitIndex;
			if (splitIndex != i)
			{
				tmp = array[i];
				array[i] = array[splitIndex];
				array[splitIndex] = tmp;
			}
			++i;
		}
		else
		{
			++i;
		}
	}
	++splitIndex;
	tmp = array[splitIndex];
	array[splitIndex] = array[size - 1];
	array[size - 1] = tmp;

	/* Recursion call*/
	if (splitIndex != 0)
		quick_sort(array, splitIndex);
	if (splitIndex + 1 != size)
		quick_sort(&array[splitIndex + 1], size - splitIndex - 1);
}


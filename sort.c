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
	size_t z = 0;
	size_t tmp = 0;

	/* The element where we will find its right place and do the split around it*/
	int pivot;

	if (size == 1)
	{
		return;
	}
	while(z != size - 1)
	{	
		splitIndex = -1;
		i = 0;
		pivot = array[size - 1 -z];
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
		print_array(array, size);
		++z;
	}
}


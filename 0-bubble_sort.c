#include "sort.h"



/**
 * bubble_sort - Returns the number of elements
 * @array: A pointer to the head of the listint_t list.
 * @size: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, thereisSwap = 1;

	if (size < 2)
		return;
	while (thereisSwap)
	{
		i = 0;
		thereisSwap = 0;
		for (; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				/* swap */
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				thereisSwap = 1;
			}
		}
	}
}

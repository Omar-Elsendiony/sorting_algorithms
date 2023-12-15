#include "sort.h"


/**
 * insertion_sort_list - Returns the number of elements
 * @list: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *HEAD = *list, *node, *savedNode;

	if (HEAD == NULL)
		return;
	node = HEAD->next;
	while (node != NULL)
	{
		savedNode = node->next;
		while (node->prev != NULL && node->prev->n > node->n)
		{
			node->prev->next = node->next;
			if (node->next != NULL)
				node->next->prev = node->prev;
			node->next = node->prev;
			node->prev = node->prev->prev;
			node->next->prev = node;
			/* check for nullptr here*/
			if (node->prev)
				node->prev->next = node;
			else
			{
				HEAD = node;
			}
			print_list(HEAD);
		}
		node = savedNode;
	}
	*list = HEAD;
}

#include "sort.h"


void insertion_sort_list(listint_t **list)
{
    listint_t *HEAD = *list, *node, *savedNode;
    node = HEAD->next;
    while(node != NULL)
    {
        savedNode = node->next;
        if (node->prev->n > node->n)
        {
            while(node->prev != NULL)
            {
                if (node->prev->n > node->n)
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
                else
                {
                    break;
                }
            }
        }
        node = savedNode;
    }
    *list = HEAD;
}

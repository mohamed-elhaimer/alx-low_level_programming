#include "lists.h"
/**
 * print_dlistint: function prints all the elements of a dlistint_t list
 * @h: list
 * Return: the number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t l;
    
    for (l = 0; h != NULL; l++)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
    return (l);
}

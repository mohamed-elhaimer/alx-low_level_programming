#include "lists.h"
/**
 * print_dlistint: function prints all the elements of a dlistint_t list
 * @h: list
 * Return: the number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t l;
    l = 0;

    if(h == NULL)
    return (0);
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        l++;
    }
    return (l);
}

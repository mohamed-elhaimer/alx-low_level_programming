#include "lists.h"
/**
 * print_listint - print elements of linked list
 * @h: list
 * Return: numbers of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t l = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		l++;
	}
	return (l);
}

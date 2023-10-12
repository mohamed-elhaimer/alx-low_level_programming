#include "lists.h"
/**
 * dlistint_len -  function that returns the number of elements in a linked
 * @h: head of linked list
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}

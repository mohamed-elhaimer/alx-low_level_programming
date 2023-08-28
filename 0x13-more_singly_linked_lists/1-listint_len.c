#include "lists.h"
/**
 * listint_len - print number of elements
 * @h: list
 * Return: number of elemnts
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}

#include "lists.h"
/**
 * *get_nodeint_at_index - function return nth node of the list
 * @head: list
 * @index: index of the node
 * Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	ptr = head;
	while (i < index && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

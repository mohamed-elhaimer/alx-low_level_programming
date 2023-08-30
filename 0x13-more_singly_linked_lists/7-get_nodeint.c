#include "lists.h"
/**
 * *get_nodeint_at_index - function return nth node of the list
 * @head: list
 * @index: index of the node
 * Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int  i = 0;
	listint_t *ptr;
	unsigned int len = listint_len(head);

	if (head == NULL)
	return (NULL);
	if (index > listint_len(head))
	return (0);
	if (i == index)
	return (head);
	ptr = head;
	for (i = 1; i <= len; i++)
	{
		ptr = ptr->next;
		if (i == index)
		return (ptr);
	}
	return (ptr);
}

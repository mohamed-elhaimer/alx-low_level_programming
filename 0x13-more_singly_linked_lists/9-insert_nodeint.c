#include "lists.h"
/**
 * *insert_nodeint_at_index - function that inserts a new node at position
 * @head: list
 * @idx: postion to add node
 * @n: data of new node
 * Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current = *head;
listint_t *ptr;
unsigned int i;

ptr = (listint_t *)malloc(sizeof(listint_t));


if (!head || !ptr)
{
return (NULL);
}
ptr->n = n;
ptr->next = NULL;

	if (idx == 0)
	{

		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

for (i = 0; current && i < idx; i++)
{
if (i == idx - 1)
{
	ptr->next = current->next;
	current->next = ptr;
	return (ptr);
}
else
current = current->next;
}
return (NULL);
}

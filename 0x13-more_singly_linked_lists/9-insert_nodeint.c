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
	unsigned int i = 0;
	listint_t *temp;
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (head == NULL && ptr == NULL)
	return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	temp = (*head);
	while (i < idx && temp != NULL)
	{

		if (i == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			break;
		}
		i++;
		temp = temp->next;

	}
	return (ptr);
}

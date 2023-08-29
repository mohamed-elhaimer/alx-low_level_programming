#include "lists.h"
/**
 * pop_listint - delete the head node
 * @head: list
 * Return: data of the node head path
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (head == NULL)
	return (0);
	else
	{
		num = (*head)->n;
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (num);
	}
}

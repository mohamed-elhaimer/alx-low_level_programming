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

	if (head == NULL || *head == NULL)
	return (0);
		num = (*head)->n;
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	return (num);
}

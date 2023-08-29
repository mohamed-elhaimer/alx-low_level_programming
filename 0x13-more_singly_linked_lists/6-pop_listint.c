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
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		ptr = NULL;
		return (num);
	}
}

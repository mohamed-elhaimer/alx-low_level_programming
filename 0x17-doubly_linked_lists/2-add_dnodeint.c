#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: data of the node
 * Return: The addresse of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	temp->next = (*head);
	if ((*head) != NULL)
	(*head)->prev = temp;
	(*head) = temp;
	return (temp);
}

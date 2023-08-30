#include "lists.h"
/**
 * sum_listint - function sum of all the data (n) of a linked list
 * @head: list
 * Return: sum of data path of linked list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
	return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

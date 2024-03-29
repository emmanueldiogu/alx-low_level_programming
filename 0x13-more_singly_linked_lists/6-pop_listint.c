#include "lists.h"

/**
 * pop_listint - delete the head of a listint_t
 * @head: first parameter
 *
 * Description - delete the head node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return (0);

	temp = *head;
	value = temp->n;
	*head = (*head)->next;
	free(temp);

	return (value);
}

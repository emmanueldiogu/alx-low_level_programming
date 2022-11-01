#include "lists.h"

/**
 * sum_listint - get the sum of all nodes
 * @head: first parameter
 *
 * Description - return the sum
 * Return: sum of nodes, NULL on failure
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

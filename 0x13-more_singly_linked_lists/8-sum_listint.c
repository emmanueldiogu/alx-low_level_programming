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
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

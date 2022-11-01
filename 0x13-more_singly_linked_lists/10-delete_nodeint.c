#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at any index
 * @head: first parameter
 * @index: second parameter
 *
 * Description - delete a node at any point
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nxt;
	unsigned int i = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	nxt = temp->next->next;
	free(temp->next);
	temp->next = nxt;
	return (1);
}

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
	listint_t *current_node, *temp_node;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	current_node = *head;

	for (i = 0; i < index - 1 && current_node->next; i++)
		current_node = current_node->next;

	if (i != index - 1 || !current_node->next)
		return (-1);

	temp_node = current_node->next;
	current_node->next = temp_node->next;
	free(temp_node);

	return (1);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - add a node at any point
 * @head: first parameter
 * @idx: second parameter
 * @n: third parameter
 *
 * Description - add a node at any point
 * Return: new node if success, NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return NULL;
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return NULL;
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return new_node;
	}
	listint_t *current_node = *head;
	for (unsigned int i = 0; i < idx - 1; i++)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return NULL;
		}
		current_node = current_node->next;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return NULL;
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return new_node;
}

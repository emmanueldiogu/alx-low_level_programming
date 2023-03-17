#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the first node of the list.
 * @n: Value to be assigned to the new node.
 *
 * Description - add node at the end
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	if (head == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, the new node becomes the head */
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		/* Append the new node to the end of the list */
		last_node->next = new_node;
	}

	return (new_node);
}

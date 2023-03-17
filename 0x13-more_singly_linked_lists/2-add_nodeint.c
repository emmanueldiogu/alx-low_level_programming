#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the pointer to the head node of the list.
 * @n: The integer value to be stored in the new node.
 *
 * Description - adds a node at the beginning
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /* Failed to allocate memory */

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;

	/* update the head pointer */
	*head = new_node;

	return (new_node);
}

#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer to store in the new node.
 *
 * Return: If successful - a pointer to the new node.
 *         If failed - NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = n;
new_node->next = NULL;

/* If list is empty, make the new node the head */
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

/* Traverse to the end of the list */
temp = *head;
while (temp->next != NULL)
temp = temp->next;

/* Update the last node and return the new node */
temp->next = new_node;
new_node->prev = temp;

return (new_node);
}

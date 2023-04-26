#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at
 * a given position in a dlistint_t list.
 * @h: A pointer to a pointer to the head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer to store in the new node.
 *
 * Return: If successful - a pointer to the new node.
 *         If failed - NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int i;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = n;

/* If the list is empty, make the new node the head */
if (*h == NULL)
{
new_node->prev = NULL;
new_node->next = NULL;
*h = new_node;
return (new_node);
}

/* Traverse to the nth node */
temp = *h;
for (i = 0; i < idx - 1 && temp != NULL; i++)
temp = temp->next;

/* If the nth node was not found, free the new node and return NULL */
if (i < idx - 1 || temp == NULL)
{
free(new_node);
return (NULL);
}

/* Insert the new node at the nth position */
new_node->next = temp->next;
new_node->prev = temp;
if (temp->next != NULL)
temp->next->prev = new_node;
temp->next = new_node;

return (new_node);
}

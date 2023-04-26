#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to return, starting from 0.
 *
 * Return: If successful - a pointer to the nth node.
 *         If failed - NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *temp;

/* Traverse to the nth node */
temp = head;
for (i = 0; i < index && temp != NULL; i++)
temp = temp->next;

/* If the nth node was found, return it */
if (i == index && temp != NULL)
return (temp);

/* If the nth node was not found, return NULL */
return (NULL);
}

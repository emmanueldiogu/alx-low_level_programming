#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at
 * a given position in a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: If successful - 1.
 *         If failed - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;

/* If the list is empty, return -1 */
if (*head == NULL)
return (-1);

/* If the node to delete is the head node, update the head pointer */
if (index == 0)
{
temp = *head;
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}

/* Traverse to the nth node */
temp = *head;
for (unsigned int i = 0; i < index && temp != NULL; i++)
temp = temp->next;

/* If the nth node was not found, return -1 */
if (temp == NULL)
return (-1);

/* Delete the nth node */
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
free(temp);

return (1);
}

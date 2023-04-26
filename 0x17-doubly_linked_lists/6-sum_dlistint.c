#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data (n) in the list.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp;

/* Traverse the list and add up the data values */
temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}

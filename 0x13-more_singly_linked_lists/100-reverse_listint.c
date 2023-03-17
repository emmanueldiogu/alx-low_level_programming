#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer to the head of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node = NULL, *next_node;

while (*head)
{
next_node = (*head)->next;
(*head)->next = prev_node;
prev_node = *head;
*head = next_node;
}

return (prev_node);
}
